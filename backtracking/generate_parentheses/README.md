# Generate Parentheses

## Problem Description

Generate all well-formed parenthesis strings containing n pairs.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(4^n * n) | O(n) recursion |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(C_n * n) | O(n) recursion |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Pruning invalid prefixes avoids generating all 2^(2n) strings.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`backtracking`

