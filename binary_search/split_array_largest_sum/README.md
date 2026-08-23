# Split Array Largest Sum

## Problem Description

Split a non-negative array into at most k non-empty contiguous parts while minimizing the largest part sum.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | Exponential | O(n) recursion brute / O(1) optimal |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(n log sum) | O(n) recursion brute / O(1) optimal |
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

`binary_search`

