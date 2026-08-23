# Sliding Window Rate Limiter

## Problem Description

Process (key,timestamp) requests in nondecreasing time and return whether each is allowed when at most max_requests may occur in the rolling window (timestamp-window, timestamp].

## Approaches

| File | Approach | Time Complexity | Extra Space |
|---|---|---:|---:|
| `solution_brute_force.cpp` | Straightforward / baseline solution | O(n) per request | O(max_requests * keys) |
| `solution_optimal.cpp` | Optimized interview-oriented solution | O(1) amortized per request | O(max_requests * keys) |
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

`day2_sliding_windows_backend`

