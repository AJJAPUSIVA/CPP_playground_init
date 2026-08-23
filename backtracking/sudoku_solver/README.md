# Sudoku Solver

## Problem Description

Solve a standard 9x9 Sudoku board in place; empty cells are represented by '.'.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | Exponential backtracking | O(81) recursion |
| `solution_optimal.cpp` | Optimized interview-oriented solution | Exponential with MRV/bit-mask pruning | O(81) recursion |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

The optimized variant tracks row/column/box masks and chooses the most constrained empty cell.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`backtracking`

