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

On the full dataset, the heuristic worked around 76.08% of the time.<br>
Heuristic successes: 5883775<br>
Heuristic failures: 1850265<br>
Undefined behavior (void functions' return values used): 58734


#### Inlining heuristic
The inlining heuristic states that if a non-parameter local variable is defined then used once, inline the definition at the use site and remove that variable.
The inlining heuristic uses the [`DIRE` dataset](https://zenodo.org/record/3403078). If the sixteen shards of the DIRE dataset are placed in a folder named `DIRE-dataset`, run 
```
python inlining_heuristic.py /path/to/DIRE-dataset
```

On the full DIRE dataset, the heuristic worked 85.90% of the time.<br>
Heuristic Successes: 2177774<br>
Heuristic Failures: 357535<br>
Global Variable/Dataset Generation Error: 57670<br>
Functions failed to parse: 257961

Included in the "Dataset Generation Error" category are functions recognized by Hex-Rays' [`F.L.I.R.T.`](https://hex-rays.com/products/ida/tech/flirt/in_depth/) library recognition system, which identifies common library functions and, among other things, substitutes the names present in the original code. This undermines the basic assumptions used in the heuristic.
