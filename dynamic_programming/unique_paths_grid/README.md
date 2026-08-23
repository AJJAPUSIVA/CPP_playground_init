# Unique Paths Grid

## Problem Description

Count paths from the top-left to bottom-right of an m-by-n grid using only right and down moves.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(2^(m+n)) | O(n) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(m*n) | O(n) |
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

`dynamic_programming`

