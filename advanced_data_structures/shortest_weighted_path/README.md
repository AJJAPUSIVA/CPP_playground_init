# Shortest Weighted Path

## Problem Description

Return shortest distances from a source in a non-negative weighted directed graph; unreachable vertices use a large sentinel.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(VE) | O(V+E) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O((V+E) log V) | O(V+E) |
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

`advanced_data_structures`

