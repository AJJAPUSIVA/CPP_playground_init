# Count Disconnected Networks

## Problem Description

Given n undirected vertices labeled 0..n-1 and edges, return the number of connected components.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(V+E) | O(V+E) brute / O(V) DSU |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O((V+E) alpha(V)) | O(V+E) brute / O(V) DSU |
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

`day3_graphs_dependencies`

