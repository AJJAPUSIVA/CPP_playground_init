# Minimum Network Cost

## Problem Description

Return the minimum spanning tree cost of an undirected weighted graph with n vertices, or -1 if disconnected.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(2^E * E) | O(V) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(E log E) | O(V) |
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

`graphs`

