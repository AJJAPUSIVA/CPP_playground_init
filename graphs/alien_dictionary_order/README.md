# Alien Dictionary Order

## Problem Description

Given words sorted according to an unknown lowercase alphabet, return one valid character order or empty if inconsistent.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(C! * input_size) | O(C+E) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(total characters + edges log C) | O(C+E) |
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

