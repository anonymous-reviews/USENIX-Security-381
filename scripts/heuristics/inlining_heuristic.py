"""Test the inlining heuristic.
"""

import argparse
import os
import re
import json
from pathlib import Path
from abc import ABC
from typing import Dict, List, Optional
from tree_sitter import Language, Parser, Node, Tree

variable_tuple_pattern = re.compile("@@([a-zA-Z_][a-zA-Z0-9_]*)@@([a-zA-Z_][a-zA-Z0-9_]*)@@([a-zA-Z_][a-zA-Z0-9_]*)")
generic_variable_pattern = re.compile("^((result)|[av]\d+)$")

C_LANGUAGE = Language('lang/c.so', 'c')
parser = Parser()
parser.set_language(C_LANGUAGE)

def get_args():
    parser = argparse.ArgumentParser()
    parser.add_argument("dataset", type=str)
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





class VarInfo:
    def __init__(self, idstr: str, original_name: str, decompiled_name: str):
        self.id = idstr
        self.original_name = original_name
        self.decompiled_name = decompiled_name
        self.uses: List[ListNode] = []

class FunctionStats:
    def __init__(self, name: str):
        self.name = name
        self.heuristic_successes = 0
        self.heuristic_failures = 0
        self.global_variable_or_error = 0

class FunctionStatCounter:
    def __init__(self, name: str, code=str):
        self.name = name
        self.var2info: Dict[str, VarInfo] = {}
        self.num_var_tuples = 0

        self.raw_input_code = code

        # Replace the variable-info tuples (given by @@VAR_ID@@Original_name@@Decompiled_name) with just the variable IDs. This makes the code parsable.
        self.code: str = variable_tuple_pattern.sub(self.add_tuple, code)
        assert self.num_var_tuples == code.count("@@") / 3 # sanity check

        self.ast: Tree = parser.parse(bytes(self.code, "utf8"))

        cursor = self.ast.walk()
        assert cursor.node.type == "translation_unit"
        assert len(cursor.node.children) == 1

        function_body = cursor.node.children[0].child_by_field_name("body")
        assert function_body is not None

        # Note: the heuristic only applies to intermediate variables, not parameters. Thus, we begin our search in the function body.
        self.find_variable_occurrences(function_body, None, Nil())
    
    def add_tuple(self, m: re.Match) -> str:
        self.num_var_tuples += 1 # for a sanity check
        varid = m.group(1)
        decompiled = m.group(2)
        original = m.group(3)

        if varid not in self.var2info:
            self.var2info[varid] = VarInfo(
                idstr=varid,
                original_name=original,
                decompiled_name=decompiled
            )
        else:
            info = self.var2info[varid]
            assert info.id == varid
            assert info.original_name == original
            assert info.decompiled_name == decompiled

        return varid
    
    def find_variable_occurrences(self, tree: Node, field: Optional[str], tail: ImmutableList):
        head = ListNode(tree.type, field, tail)
        if tree.type == "identifier":
            name = tree.text.decode("utf8")
            if name in self.var2info: # This identifier is a variable, as opposed to a type name or function name
                self.var2info[name].uses.append(head)
        for i, child in enumerate(tree.children):
            self.find_variable_occurrences(child, tree.field_name_for_child(i), head)
    
    def fits_declared_pattern(self, node: ListNode):
        return node.field == "declarator"
    
    def fits_initialized_pattern(self, node: ListNode):
        if not self.fits_declared_pattern(node):
            return False

        while isinstance(node, ListNode):
            if node.nodetype == "init_declarator":
                return True
            node = node.tail
        return False

    def fits_written_to_pattern(self, node: ListNode):
        # Must check recursively in case this variable is part of a larger expression that is written to.
        while isinstance(node, ListNode):
            if node.field == "left" and node.tail.nodetype == "assignment_expression":
                return True
            node = node.tail
        return False

    def fits_read_from_pattern(self, node: ListNode):
        """Returns true if this node's position in the AST indicates that it is read from and false otherwise.
        
        This is the "default assumption." There are many different types of expressions that can read from a variable
        in C (and code more generally); we assume that a reference to a particular variable's name that is neither
        declared or written to is read from.
        """
        return not self.fits_declared_pattern(node) and not self.fits_written_to_pattern(node)

    def fits_declare_write_read_pattern(self, uses: List[ListNode]):
        assert len(uses) == 3
        return self.fits_declared_pattern(uses[0]) \
               and not self.fits_initialized_pattern(uses[0]) \
               and self.fits_written_to_pattern(uses[1]) \
               and self.fits_read_from_pattern(uses[2])

    def fits_initialized_read_pattern(self, uses: List[ListNode]):
        assert len(uses) == 2
        return self.fits_initialized_pattern(uses[0]) and self.fits_read_from_pattern(uses[1])
        

    def inlining_heuristic_stats(self) -> FunctionStats:
        write_read_once_vars: List[VarInfo] = []
        num_other_vars = 0

        for _, info in self.var2info.items():
            if len(info.uses) == 3 and self.fits_declare_write_read_pattern(info.uses):
                write_read_once_vars.append(info)
            elif len(info.uses) == 2 and self.fits_initialized_read_pattern(info.uses):
                write_read_once_vars.append(info)
            else:
                num_other_vars += 1

        results = FunctionStats(self.name)
        for var in write_read_once_vars:
            m = generic_variable_pattern.match(var.decompiled_name)
            if m is not None: # The variable is a generic decompiler variable.
                # If the decompiled and original variable names are both the same generic variable
                # generated by a decompiler, then, based on the way the dataset was built, this variable
                # was generated by the decompiler and didn't exist in the original source code.
                # The heuristic states that extra intermediate variables that are written to then read
                # from once should be inlined. We count this as a heuristic success because the lack of
                # corresponding original variable means that the code author thought it was acceptable to 
                # inline the expressions here; that is, the heuristic matches the original developer's
                # intuition.
                if var.decompiled_name == var.original_name:
                    results.heuristic_successes += 1
                else:
                    results.heuristic_failures += 1
            else:
                results.global_variable_or_error += 1
        
        return results

class BinaryStatCounter:
    def __init__(self, sha: str):
        self.sha = sha
        self.errored_functions = 0
        self.functions: List[FunctionStats] = []

def process_binary(filename) -> BinaryStatCounter:
    counter = BinaryStatCounter(Path(filename).stem)
    with open(filename, "r") as fp:
        for line in fp:
            content = json.loads(line)
            try:
                counter.functions.append(FunctionStatCounter(content['function'], content['raw_code']).inlining_heuristic_stats())
            except AssertionError:
                counter.errored_functions += 1
    
    return counter

def main(args: argparse.Namespace):
    binary_stats: List[BinaryStatCounter] = []
    # assumes the dataset is structred with the 0, 1...f trees each in their own directories
    for shard in os.scandir(args.dataset):
        for file in os.scandir(shard):
            binary_stats.append(process_binary(file))

    heuristic_successes = 0
    heuristic_failures = 0
    global_variable_or_error = 0
    parsing_failures = 0
    for counter in binary_stats:
        for function in counter.functions:
            heuristic_successes += function.heuristic_successes
            heuristic_failures += function.heuristic_failures
            global_variable_or_error += function.global_variable_or_error
        parsing_failures += counter.errored_functions

    print(f"---- Results ----")
    print(f"Heuristic Successes: {heuristic_successes} ({heuristic_successes / (heuristic_successes + heuristic_failures)})")
    print(f"Heuristic Failures: {heuristic_failures}")
    print(f"Global Variable/Dataset Generation Error: {global_variable_or_error}")
    print(f"Functions failed to parse: {parsing_failures}")


if __name__ == "__main__":
    main(get_args())