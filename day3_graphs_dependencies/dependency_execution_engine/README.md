# Dependency Execution Engine

## Problem Description

Given task names and dependency pairs (task, prerequisite), return parallel execution batches in dependency order, or empty on a cycle.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(V^2+E) | O(V+E) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(V+E + ordering) | O(V+E) |
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

