"""Test the return heuristic.
"""

import argparse
import os
import pathlib
import json
from abc import ABC
from typing import Dict, List, Set, Optional, Tuple, Iterable
from tree_sitter import Language, Parser, Node

C_LANGUAGE = Language('lang/c.so', 'c')
parser = Parser()
parser.set_language(C_LANGUAGE)

def get_args():
    parser = argparse.ArgumentParser()
    # Expected input format: A directory containing the names of repository owners. Inside each repository
    # owner folder should be one or more nonempty jsonl files with one object per line.
    parser.add_argument("input")
    parser.add_argument("--output-csv", default="return_heuristic.csv")
    return parser.parse_args()


### Immutable list classes for storing what has been seen so far down a path in the tree.
### Based on Scala's immutable list.
class ImmutableList(ABC):
    pass

class Nil(ImmutableList):
    def __init__(self):
        pass

    def __eq__(self, other):
        return isinstance(other, Nil)
    
    def __repr__(self):
        return "Nil"
    
class ListNode(ImmutableList):
    def __init__(self, nodetype: str, field: Optional[str], tail: ImmutableList):
        self.nodetype = nodetype
        self.field = field
        self.tail = tail

    def __repr__(self):
        item_repr = self.nodetype if self.field is None else f"({self.nodetype}, {self.field})"
        return item_repr + " :: " + repr(self.tail)



### Classes for tracking the usage of functions inside a binary.
class Use:
    # These node types occurring on the path from a function call to the root do not indicate that
    # the function's return value was used.
    nonuse_nodetypes: Set[str] = {'expression_statement', 'compound_statement', 
                                  'function_definition', 'if_statement', 
                                  'for_statement', 'while_statement',
                                  'do_statement', 'case_statement', 
                                  'switch_statement'}

    def __init__(self, location: ListNode):        
        self.return_value_used = self.value_used(location)
    
    def value_used(self, location: ListNode):
        # Switch, if, for, and while statements wrap their control-flow arguments in
        # parenthesized_expressions, which are not in nonuse_nodetypes. For loops are different.
        # The return value of a function called in the middle expression in a for-loop header
        # is used by that loop, but 'for_statement' is its direct parent. We must manually
        # check this case separately.
        # (Unfortunately, 'for_statement' must be in nonuse_nodetypes because the other 
        # fields of a for statement are validly unused, and for_statements can be nested arbitrarily deep.).
        if not isinstance(location, Nil) and not isinstance(location.tail, Nil) and \
           location.field == "condition" and location.tail.nodetype == "for_statement":
            return True

        # The head is passed in; it is a call_expression that corresponds to this use.
        # A call does not use itself, however.
        location = location.tail 
        while not isinstance(location, Nil) and location.nodetype in Use.nonuse_nodetypes:
            location = location.tail
        return False if isinstance(location, Nil) else True
    
    def __repr__(self):
        return repr(self.return_value_used)

class FunctionRegistry:
    def __init__(self, repo: str):
        self.repo = repo
        self.fn2retval: Dict[str, bool] = {} # true if it has a return value, false if not.
        self.fn2use: Dict[str, List[Use]] = {}
    
    def __repr__(self):
        result = "---- Defined Functions ----\n"
        for fn, retval in self.fn2retval.items():
            result += f"{fn} -> {retval}: " + ", ".join([repr(use) for use in self.fn2use[fn]]) + "\n"

        result += "\n\n---- Undefined Functions ----\n"
        for fn, uses in self.fn2use.items():
            if fn not in self.fn2retval:
                result += f"{fn}: " + ", ".join([repr(use) for use in uses]) + "\n"
        
        return result
    
    def definition_encountered(self, fn: str, has_return_value: bool):
        # assert fn not in self.fn2retval
        self.fn2retval[fn] = has_return_value
        if fn not in self.fn2use:
            self.fn2use[fn] = []
    
    def use_encountered(self, fn: str, use: Use):
        if fn not in self.fn2use:
            self.fn2use[fn] = []
        self.fn2use[fn].append(use)
    
    def functions_used(self) -> Dict[str, bool]:
        """For each function defined in the binary represented by this function registry,
        return true if the function's return value was used and false if the function's
        return value was not used.
        """

        result = {}
        for fn in self.fn2retval:
            uses = self.fn2use[fn]
            return_value_used = False
            for use in uses:
                if use.return_value_used:
                    return_value_used = True
                    break
            
            result[fn] = return_value_used
        
        return result

def get_function_declaration_info(definition: Node) -> Tuple[str, bool]:
    assert definition.type == "function_definition"

    declarator = definition.child_by_field_name("declarator")
    type_node = definition.child_by_field_name("type")
    assert type_node is not None
    assert declarator is not None

    function_declarator_only = declarator.type == "function_declarator"
    
    while declarator.type == "pointer_declarator":
        # param_declarator.children[0] (None) is an *
        # param_declarator.children[1] (declarator) is another declarator - possibly a pointer, possibly an identifier.
        declarator = declarator.child_by_field_name("declarator")
    assert declarator.type == "function_declarator"

    name = declarator.child_by_field_name("declarator")
    assert name.type == "identifier" # This should be the name of the function

    # type information is contained in both the type and declarator fields.
    # The type of course contains the type of the function, but the declarator may contain
    # type information which wraps that type. A common case is a pointer_declarator.
    # For example for a function which returns a void *, the "type" field would be
    # "void" but the declarator would be a pointer_declarator.
    return (name.text.decode("utf8"), type_node.text.decode("utf8") != "void" or not function_declarator_only)

def get_function_name(expression: Node) -> Optional[str]:
    """If this call expression is a normal function call (i.e. not using a function
    pointer) then return the name of this function. Otherwise, return None.
    """
    assert expression.type == "call_expression"
    name_node = expression.child_by_field_name("function")
    if name_node.type == "identifier":
        return name_node.text.decode("utf8")
    return None

def print_immediate_children(root: Node):
    for i, child in enumerate(root.children):
        print(child.type, end=": ")
        print(root.field_name_for_child(i))


def find_and_record_uses(code: str, registry: FunctionRegistry) -> 1:
    """Find uses of functions in a binary and store them in 'registry'. Mark this
    function as 'defined' in registry.
    """
    ast = parser.parse(bytes(code, "utf8"))
    cursor = ast.walk()
    if cursor.node.type != "translation_unit":
        return 1

    # This code assumes that the 'code' variable contains a single C function.
    if len(cursor.node.children) != 1:
        return 1
    
    ast = cursor.node.children[0]

    try:
        name, has_return_value = get_function_declaration_info(ast)
    except AssertionError:
        return 1
    registry.definition_encountered(name, has_return_value)

    def search_ast(tree: Node, field: Optional[str], tail: ListNode):
        head = ListNode(tree.type, field, tail)
        if tree.type == "call_expression":
            function_name = get_function_name(tree)
            if function_name is not None:
                registry.use_encountered(function_name, Use(head))
        for i, child in enumerate(tree.children):
            search_ast(child, tree.field_name_for_child(i), head)
    
    search_ast(ast, None, Nil())
    return 0

def calculate_heuristic_stats(repos: Iterable[FunctionRegistry]) -> Tuple[int, int, int]:
    follows_heuristic = 0
    does_not_follow_heuristic = 0
    should_be_impossible = 0

    for functions in repos:
        used = functions.functions_used()
        for fn, has_return_value in functions.fn2retval.items():
            if fn == "main":
                continue # main's return value is used but by the system.

            is_used = used[fn]
            if has_return_value and is_used:
                follows_heuristic +=1 
            elif not has_return_value and not is_used:
                follows_heuristic += 1
            elif has_return_value and not is_used:
                does_not_follow_heuristic += 1
            else:
                should_be_impossible += 1

    return (follows_heuristic, does_not_follow_heuristic, should_be_impossible)      

def get_success_rate(success: int, failure: int):
    if success + failure > 0:
        return success / (success + failure)
    return "NA"

def main(args):
    errors = 0
    registries = []
    for owner in os.scandir(args.input):
        for project in os.scandir(owner):
            path = pathlib.Path(project)
            with open(path, "r") as fp:
                registry = FunctionRegistry(owner.name + "/" + path.stem)
                for line in fp:
                    function_data = json.loads(line)
                    errors += find_and_record_uses(function_data['original_code'], registry)
                registries.append(registry)
    
    # Calculate the overall heuristic:
    success, failure, impossible = calculate_heuristic_stats(registries)
    print("Corpus statistics:")
    print(f"Success rate: {get_success_rate(success, failure)}, Successes: {success}, Failures: {failure}, Void function return value used: {impossible}")
    print()

    success_rates = []
    # Calculate the heuristic by repository
    with open(args.output_csv, "w") as fp:
        fp.write(f"repository,heuristic_success_rate,success,failure,impossible\n")
        for repo in registries:
            success, failure, impossible = calculate_heuristic_stats([repo])
            success_rate = get_success_rate(success, failure)
            fp.write(f"{repo.repo},{success_rate},{success},{failure},{impossible}\n")
            if not isinstance(success_rate, str):
                success_rates.append(success_rate)
    
    cross_repo_success_rate = sum(success_rates) / len(success_rates)
    
    print(f"Average per-repository success rate: {cross_repo_success_rate}")
    

            
        

if __name__ == "__main__":
    main(get_args())
    # code = """
    # long long test_set_bit()
    # {
    #     tcase_fn_start("test_set_bit", "test_bitop.c", 4LL);
    #     mark_point("test_bitop.c", 8LL);
    #     mark_point("test_bitop.c", 11LL);
    #     return mark_point("test_bitop.c", 15LL);
    # }
    # """

    # registry = FunctionRegistry("example")
    # find_and_record_uses(code, registry)
    # print(registry)