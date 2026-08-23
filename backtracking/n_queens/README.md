# N Queens

## Problem Description

Return all valid placements of n queens on an n-by-n chessboard.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n! * n) | O(n) recursion |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(n!) | O(n) recursion |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

Bit masks make row/column/diagonal conflict tests constant time.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`backtracking`

