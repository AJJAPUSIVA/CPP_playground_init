# Insert One Interval

## Problem Description

Insert one interval into a sorted non-overlapping interval list and merge as needed.

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n log n) | O(n) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(n) | O(n) |
| `test_solution.cpp` | Dependency-free assertions for representative and edge cases | — | — |

## Key Insight

The brute implementation is filled by the generator with sort-and-merge logic.

## Build and Run

From this problem directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

The test file includes both solution variants in separate namespaces, so it can be compiled as a single translation unit.

## Repository Track

`intervals_and_greedy`

