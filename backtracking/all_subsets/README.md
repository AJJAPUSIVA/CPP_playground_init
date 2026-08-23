# All Subsets

## Problem Description

Return the power set of a list of distinct integers.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n * 2^n) | O(n) recursion excluding output |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(n * 2^n) | O(n) recursion excluding output |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Both are output-optimal; the second emphasizes the include/exclude recursion tree.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`backtracking`

