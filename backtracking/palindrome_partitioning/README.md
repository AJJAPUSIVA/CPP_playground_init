# Palindrome Partitioning

## Problem Description

Partition a string into all sequences of palindromic substrings.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n * 2^n) | O(n^2) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(n^2 + n * 2^n) | O(n^2) |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Precomputing palindrome intervals removes repeated substring scans.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`backtracking`

