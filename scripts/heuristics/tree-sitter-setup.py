"""Download and build the tree-sitter binary for C.
"""

import os
from tree_sitter import Language


os.system("git clone https://github.com/tree-sitter/tree-sitter-c")

Language.build_library(
  # Store the library in the `build` directory
  'lang/c.so',

  # Include one or more languages
  [
    'tree-sitter-c'
  ]
)