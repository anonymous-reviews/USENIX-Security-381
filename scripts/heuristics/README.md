# Heuristics

This folder contains the code used to empirically evaluate heuristics presented for improving decompilers in USENIX Security submission #381.

## Installation

Install and activate the python environment with `conda`.
```
conda env create -f environment.yml
conda activate codebook_heuristics
```

These scripts use [`tree-sitter`](https://tree-sitter.github.io/tree-sitter/) for parsing C code. Run `tree-sitter-setup.py` to set up the tree-sitter library.

```
python tree-sitter-setup.py
```

## Usage

#### Return heuristic
The return heuristic states that functions whose return values are unused in the program as a whole should be decompiled as `void` functions.
A sample of the dataset used to compute the heuristic value is provided in `sample.tar.gz`. Uncompress this file with
```
tar -xzf sample.tar.gz
```
then run
```
python return_heuristic.py sample
```


#### Inlining heuristic
The inlining heuristic states that if a non-parameter local variable is defined then used once, inline the definition at the use site and remove that variable.
The inlining heuristic uses the [`DIRE` dataset](https://zenodo.org/record/3403078). If the sixteen shards of the DIRE dataset are placed in a folder named `DIRE-dataset`, run 
```
python inlining_heuristic.py /path/to/DIRE-dataset
```
