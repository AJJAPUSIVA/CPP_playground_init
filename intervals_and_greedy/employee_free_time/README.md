# Employee Free Time

## Problem Description

Given multiple employees' busy half-open intervals, return finite gaps in the merged company-wide busy schedule.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(N log N) | O(k) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(N log k) | O(k) |
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

`intervals_and_greedy`

