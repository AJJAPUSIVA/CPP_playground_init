# Valid Sudoku

## Problem Description

Validate a 9x9 Sudoku board: each non-dot digit may appear at most once per row, column, and 3x3 box.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(81 log 9) | O(1) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(81) | O(1) |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Start from the simple correct solution, then remove repeated work or use the data structure that matches the access pattern.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`arrays_and_hashing`

