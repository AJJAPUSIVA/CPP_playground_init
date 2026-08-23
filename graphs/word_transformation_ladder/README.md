# Word Transformation Ladder

## Problem Description

Return the number of words in the shortest transformation from begin to end when each step changes one letter and intermediate words must be in the dictionary.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(N^2 * L) | O(N*L) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(N * L * alphabet) | O(N*L) |
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

