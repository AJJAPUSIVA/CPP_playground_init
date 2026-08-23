# Design Basic Hash Map

## Problem Description

Implement integer key/value put, get, and remove operations without using unordered_map in the optimal implementation.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n) per operation | O(n) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(1) expected | O(n) |
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

