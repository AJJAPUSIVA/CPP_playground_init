# Combination Sum Target

## Problem Description

Given distinct positive candidates and a target, return combinations whose values sum to the target; values may be reused.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | Exponential with duplicate generation | O(target/min) recursion |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(candidates^(target/min)) worst case | O(target/min) recursion |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Sorting plus a start index prevents permutation duplicates.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`backtracking`

