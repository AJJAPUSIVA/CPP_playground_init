# C++ Playground — 220 Problems

A clean C++17 algorithm and backend-interview practice repository with **220 problem folders across 19 tracks**.

This repository is designed as a replacement tree: each exercise is self-contained and follows the same structure.

```text
topic/
└── problem/
    ├── README.md
    ├── solution_brute_force.cpp
    ├── solution_optimal.cpp
    └── test_solution.cpp
```

## What is included

Every problem has:

- a focused problem statement and complexity table;
- a straightforward baseline implementation;
- an optimized implementation;
- dependency-free `assert` tests;
- a direct one-command C++17 build path.

The catalog spans classic DSA plus practical backend exercises: arrays/hashing, binary search, sliding windows, graphs, dynamic programming, trees/BST, linked lists, heaps/top-k, intervals/greedy, advanced data structures, rate limiting, event/session processing, reconciliation, and dependency graphs.

## Tracks

| Track | Problems |
|---|---:|
| `advanced_data_structures` | 13 |
| `arrays_and_hashing` | 16 |
| `backtracking` | 10 |
| `binary_search` | 12 |
| `day1_arrays_strings` | 12 |
| `day2_sliding_windows_backend` | 12 |
| `day3_graphs_dependencies` | 12 |
| `dynamic_programming` | 23 |
| `graphs` | 17 |
| `hashing` | 6 |
| `heap_and_topk` | 10 |
| `intervals_and_greedy` | 12 |
| `linked_lists` | 10 |
| `prefix_sum` | 6 |
| `sliding_window` | 8 |
| `sorting_and_bits` | 10 |
| `stack_and_queue` | 8 |
| `trees_and_bst` | 17 |
| `two_pointers` | 6 |
| **Total** | **220** |

See [`PROBLEM_MANIFEST.csv`](PROBLEM_MANIFEST.csv) for the complete machine-readable list.

## Verify the complete repository

Requirements: a C++17 compiler (`g++` by default).

```bash
make verify
```

The verifier builds the generated C++ test harness with warnings enabled and executes assertions for all 220 problem folders. It fails on the first broken build or assertion.

You can choose another compiler:

```bash
make verify CXX=clang++
```

## Run one problem

```bash
cd arrays_and_hashing/pair_sum_indices
g++ -std=c++17 -Wall -Wextra -pedantic test_solution.cpp -o test_solution
./test_solution
```

## Replace an older repository checkout

If you want to keep the old Git history but replace its working tree, copy this repository's contents into the old checkout while preserving `.git`, inspect the diff, then commit:

```bash
# from the old repository checkout
find . -mindepth 1 -maxdepth 1 ! -name .git -exec rm -rf {} +
cp -R /path/to/CPP_playground_complete/. .
git add -A
git status
git commit -m "Replace playground with structured 220-problem C++ set"
git push
```

Review `git status` before committing because the replacement intentionally removes the old root-level problem layout.

## Conventions

- C++ standard: C++17.
- No external test framework is required.
- Shared node/interval/event types live in `include/playground_types.hpp`.
- Brute-force and optimal solutions are kept separate to make complexity trade-offs explicit.
- Tests include the two implementation files under separate namespaces, keeping each problem easy to compile independently.
