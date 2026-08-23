# Maximum Contiguous Sum

## Problem Description

Given an integer array, return the maximum sum of any non-empty contiguous subarray.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n^2) | O(1) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(n) | O(1) |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Kadane's algorithm is the canonical optimal approach.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`arrays_and_hashing`

