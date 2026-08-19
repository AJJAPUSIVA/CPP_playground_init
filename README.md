# CPP Playground

A collection of classic algorithmic problems implemented in modern C++20, organized by problem type. Each folder contains multiple solution variants — from brute force to optimized — with test files.

---

## find_pair_sum_variants

**Problem:** Given an array of integers and a target sum, find two indices whose values add up to the target.

**LeetCode:** [1. Two Sum](https://leetcode.com/problems/two-sum/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `find_pair_sum_brute_force.cpp` | Nested loops checking all pairs | O(n²) | O(1) |
| `find_pair_sum.cpp` | Hash map storing seen values | O(n) | O(n) |
| `find_pair_sum_safe.cpp` | Hash map with `std::optional` return | O(n) | O(n) |
| `find_pair_sum_sorted.cpp` | Two pointers on sorted input | O(n log n) | O(1) |
| `find_pair_sum_with_sorting.cpp` | Sort + two pointers variant | O(n log n) | O(1) |
| `find_earliest_pair_sum.cpp` | Hash map returning first valid pair | O(n) | O(n) |
| `find_pair_sum_tests.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- The hash map approach is the standard O(n) solution. Use `reserve()` to avoid rehashing.
- `std::optional<std::pair<>>` is the idiomatic C++17+ way to express "might not exist" — avoids sentinel values like `{-1, -1}`.
- Two-pointer works only on sorted data; if original indices matter, you need the hash map.
- Watch for duplicate values — the hash map naturally handles this since you check before inserting.

---

## find_product_except_self_variants

**Problem:** Given an array, return an array where each element is the product of all other elements (without using division).

**LeetCode:** [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `find_product_except_self_brute_force.cpp` | Nested loop for each position | O(n²) | O(n) |
| `find_product_except_self.cpp` | Separate prefix and suffix arrays | O(n) | O(n) |
| `find_product_except_self_optimized.cpp` | Single output array, two passes | O(n) | O(1)* |
| `find_product_except_self_readable.cpp` | Clear variable naming variant | O(n) | O(n) |
| `find_product_except_self_clean.cpp` | Minimal clean implementation | O(n) | O(n) |
| `find_checked_multiply.cpp` | Overflow-safe multiplication | O(n) | O(n) |
| `find_product_except_self_tests.cpp` | Test cases | — | — |

*O(1) extra space (output array not counted).

**Mid/Senior Notes:**
- The prefix/suffix decomposition is key: `result[i] = product_of_left * product_of_right`.
- The optimized single-array version builds prefix left-to-right in the output, then multiplies suffix right-to-left in place — saves one allocation.
- Division-based approach fails when zeros exist. The prefix/suffix approach handles zeros naturally.
- Use `long long` to avoid overflow on large inputs.
- The reverse loop `for (std::size_t i = n; i-- > 1;)` is idiomatic for unsigned countdown without underflow.

---

## find_three_number_zero_sum_variants

**Problem:** Find all unique triplets in an array that sum to zero.

**LeetCode:** [15. 3Sum](https://leetcode.com/problems/3sum/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `three_sum.cpp` | Sort + two pointers with skip logic | O(n²) | O(1)* |
| `three_sum_optimized.cpp` | Optimized variant with early termination | O(n²) | O(1)* |
| `three_sum_tests.cpp` | Test cases | — | — |

*Excluding output storage.

**Mid/Senior Notes:**
- Sort first, then fix one element and use two pointers on the remainder — reduces O(n³) brute force to O(n²).
- Deduplication is the tricky part: skip duplicate fixed values (`nums[i] == nums[i-1]`) and duplicate left/right pointers after finding a triplet.
- Cast to `long long` before summing to prevent integer overflow.
- Early termination: if `nums[i] > 0`, no valid triplet exists (all remaining are positive).

---

## find_move_zeroes_variants

**Problem:** Move all zeros to the end of an array while maintaining relative order of non-zero elements, in-place.

**LeetCode:** [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `find_move_zeroes_extra_space.cpp` | Copy non-zeros to new array | O(n) | O(n) |
| `find_move_zeroes.cpp` | Two-pass: copy non-zeros, fill zeros | O(n) | O(1) |
| `find_move_zeroes_swap.cpp` | Single-pass swap with write pointer | O(n) | O(1) |
| `find_move_zeroes_compact.cpp` | Minimal compact version | O(n) | O(1) |
| `find_move_zeroes_optimized.cpp` | Skip unnecessary self-swaps | O(n) | O(1) |
| `find_move_zeroes_destination.cpp` | Destination-pointer naming variant | O(n) | O(1) |
| `find_move_zeroes_tests.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- Classic two-pointer / read-write pointer pattern. The "write" pointer tracks where the next non-zero should go.
- The swap variant preserves the invariant that everything before `writeIndex` is finalized — useful for understanding partitioning logic (same idea as Lomuto partition).
- Optimized version checks `readIndex != writeIndex` before swapping to avoid no-op writes — matters for cache performance on large arrays.
- This is a building block pattern: the same read/write pointer technique applies to removing duplicates, filtering elements, etc.

---

## find_maximum_subarray_sum_variants

**Problem:** Find the contiguous subarray with the largest sum (Kadane's algorithm).

**LeetCode:** [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `find_maximum_subarray_sum_brute_force.cpp` | Check all subarrays | O(n²) | O(1) |
| `find_maximum_subarray_sum.cpp` | Kadane's algorithm | O(n) | O(1) |
| `find_maximum_subarray_sum_prefix.cpp` | Prefix sum tracking min prefix | O(n) | O(1) |
| `find_maximum_subarray_sum_optional.cpp` | Returns `std::optional` for empty input | O(n) | O(1) |
| `find_maximum_subarray_with_indices.cpp` | Returns start/end indices of best subarray | O(n) | O(1) |
| `find_maximum_subarray_sum_tests.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- Kadane's insight: at each position, either extend the current subarray or start fresh. `currentSum = max(value, currentSum + value)`.
- The prefix sum approach is equivalent: `maxSubarraySum = maxPrefixSum - minPrefixSoFar`. Useful when you need the actual indices.
- Handle the all-negative case: Kadane's naturally returns the least negative element.
- `std::optional` for empty input is better API design than returning 0 (which could be a valid sum).
- Tracking indices requires updating `bestStart` when you reset `currentSum` to the current element.

---

## find_subarray_sum

**Problem:** Count/find subarrays that sum to a given target k.

**LeetCode:** [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `subarray_sum_brute_force.cpp` | Check all subarrays | O(n²) | O(1) |
| `subarray_sum_prefix.cpp` | Prefix sum frequency map | O(n) | O(n) |
| `subarray_sum_optimized.cpp` | Prefix sum with `reserve()` | O(n) | O(n) |
| `count_subarrays_with_sum.cpp` | `std::int64_t` fixed-width variant | O(n) | O(n) |
| `find_subarray_with_sum_k.cpp` | Return first matching subarray indices | O(n) | O(n) |
| `longest_subarray_sum_k.cpp` | Find longest subarray summing to k | O(n) | O(n) |
| `test_subarray_sum.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- Core insight: if `prefix[j] - prefix[i] == k`, then subarray `[i+1..j]` sums to k. Store prefix frequencies in a hash map.
- Initialize `map[0] = 1` — accounts for subarrays starting at index 0.
- `reserve()` prevents rehashing and improves cache performance.
- `try_emplace` for the index-tracking variant: only store the *first* occurrence of each prefix to get the *longest* subarray.
- Unlike sliding window, this works with **negative numbers** — sliding window only works for positive-only arrays.

---

## find_max_area

**Problem:** Given heights representing vertical lines, find two lines that form a container holding the most water.

**LeetCode:** [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `max_area_brute_force.cpp` | Check all pairs | O(n²) | O(1) |
| `max_water_container.cpp` | Two pointers from ends | O(n) | O(1) |
| `max_water_container_with_indices.cpp` | Returns area + indices via struct | O(n) | O(1) |
| `maximum_container_area.cpp` | `std::int64_t` fixed-width variant | O(n) | O(1) |
| `test_max_water_container.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- Two-pointer proof: moving the shorter line inward is the only way to potentially increase area — moving the taller one can only decrease or maintain width while height is still limited by the shorter side.
- `static_cast<long long>(right - left)` prevents overflow when multiplying width × height.
- The `<=` vs `<` in pointer movement doesn't affect correctness but `<=` (move left when equal) is slightly cleaner.
- `std::optional<ContainerResult>` for the indices version handles the edge case of < 2 elements gracefully.

---

## find_longest_unique_substring

**Problem:** Find the length of the longest substring without repeating characters.

**LeetCode:** [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `longest_unique_substring.cpp` | Fixed array[256] tracking last index | O(n) | O(1) |
| `longest_unique_substring_set.cpp` | `unordered_set` sliding window | O(n) | O(min(n,charset)) |
| `longest_unique_substring_map.cpp` | `unordered_map` tracking last index | O(n) | O(min(n,charset)) |
| `longest_unique_window.cpp` | Returns start + length via struct | O(n) | O(1) |
| `test_longest_unique_substring.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- The `array<256>` approach is fastest — O(1) lookup, no hashing overhead, fixed memory. Use `std::ptrdiff_t` with -1 sentinel for "not seen."
- The set approach shrinks the window by erasing from the left until the duplicate is gone — simpler logic but more operations per duplicate.
- The map approach jumps `left` directly to `lastSeen[ch] + 1` — fewer iterations but hash overhead.
- Key subtlety: check `lastSeen[ch] >= left` — a character might have been seen before the current window started.
- `unsigned char` cast prevents negative index when using `char` as array index.

---

## find_minimum_window

**Problem:** Find the smallest substring of source that contains all characters of target.

**LeetCode:** [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `minimum_window.cpp` | Array[256] tracking formed vs required kinds | O(n) | O(1) |
| `minimum_window_compact.cpp` | Single `missing` counter approach | O(n) | O(1) |
| `minimum_window_map.cpp` | `unordered_map` variant (skeleton) | O(n) | O(k) |
| `test_minimum_window.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- Two common counting strategies:
  - **Kinds-based:** Track how many distinct characters are fully satisfied (`formedKinds == requiredKinds`).
  - **Missing-based:** Track total missing characters (`missing == 0` means window is valid). More compact code.
- The "shrink from left" pattern: once valid, shrink until invalid, record minimum along the way.
- `std::numeric_limits<std::size_t>::max()` as initial best avoids a separate `found` boolean.
- Handles duplicate characters in target correctly — `required['A'] = 2` means we need at least 2 A's.
- Early exit: if `target.size() > source.size()`, impossible.

---

## find_longest_replacement_window

**Problem:** Find the longest substring where you can replace at most k characters to make all characters the same.

**LeetCode:** [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `longest_replacement_window.cpp` | Sliding window with tracked max frequency | O(n) | O(1) |
| `longest_replacement_window_exact.cpp` | Recomputes `max_element` each step | O(26n) | O(1) |
| `longest_replacement_window_bytes.cpp` | Full 256-byte range support | O(n) | O(1) |
| `longest_replacement_range.cpp` | Returns start + length via struct | O(n) | O(1) |
| `test_character_replacement.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- Key insight: a window is valid when `windowLength - maxFrequency <= k` (characters to replace ≤ k).
- The `maxFrequency` trick: we never decrease it. This is safe because we only care about finding *longer* windows, which require a *higher* max frequency. The window might be temporarily invalid but never records a wrong `best`.
- The "exact" variant recomputes max each time — clearer for interviews but 26× slower constant factor.
- The 256-byte variant handles any ASCII input, not just uppercase letters.
- This is a "window never shrinks" optimization — the window only grows or slides, never truly shrinks below its best size.

---

## Building & Running Tests

Each test file can be compiled independently:

```bash
cd find_subarray_sum
g++ -std=c++20 -o test test_subarray_sum.cpp && ./test
```

All test files include their corresponding solution via `#include "solution.cpp"` and provide a `main()` that runs assertions.

---

## find_sliding_window_maximum

**Problem:** Given an array of integers and a window size k, return the maximum value in each sliding window of size k as it moves from left to right.

**LeetCode:** [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `sliding_window_maximum_brute_force.cpp` | Scan each window for the max | O(nk) | O(1)* |
| `sliding_window_maximum_deque.cpp` | Monotonic decreasing deque of indices | O(n) | O(k) |
| `sliding_window_maximum_clean.cpp` | Compact deque version | O(n) | O(k) |
| `sliding_window_maximum_multiset.cpp` | `std::multiset` ordered container | O(n log k) | O(k) |
| `sliding_window_maximum_sparse_table.cpp` | Precomputed sparse table, O(1) queries | O(n log k) build, O(n) query | O(n log k) |
| `test_sliding_window_maximum.cpp` | Test cases | — | — |

*Excluding output array.

**Mid/Senior Notes:**
- The **monotonic deque** is the canonical O(n) solution. It stores indices in decreasing order of value. Front = current max. Back-pop any element ≤ the incoming one (they're permanently useless).
- Each index is pushed once and popped at most once → amortized O(1) per element, O(n) total.
- The `multiset` approach is simpler (insert, erase, grab `rbegin()`) but O(n log k) — good fallback in interviews.
- Sparse table is overkill for a single k but useful for range-max queries on static arrays with varying query ranges.
- The `<=` in the back-pop condition means equal elements get replaced — the newer one lives longer in the window.

---

## find_sort_colors_in_place

**Problem:** Given an array with values 0, 1, and 2 (representing red, white, blue), sort them in-place so all 0s come first, then 1s, then 2s.

**LeetCode:** [75. Sort Colors](https://leetcode.com/problems/sort-colors/)

| File | Approach | Time | Space |
|------|----------|------|-------|
| `sort_colors_brute_force.cpp` | `std::sort` (comparison sort) | O(n log n) | O(log n) |
| `sort_colors_counting.cpp` | Count each color, overwrite | O(n) | O(1) |
| `sort_colors_two_pass.cpp` | Swap 0s to front, then swap 1s | O(n) | O(1) |
| `sort_colors_dutch_flag.cpp` | Dutch National Flag (3 pointers) | O(n) | O(1) |
| `sort_colors_dutch_flag_clean.cpp` | Compact Dutch Flag variant | O(n) | O(1) |
| `sort_colors_overwrite.cpp` | Three cascading write pointers | O(n) | O(1) |
| `test_sort_colors.cpp` | Test cases | — | — |

**Mid/Senior Notes:**
- **Dutch National Flag** (Dijkstra's algorithm) is the canonical single-pass solution. Three pointers partition into: `[0s | 1s | unprocessed | 2s]`.
- Key subtlety: when swapping with `high`, don't advance `mid` — the swapped-in element is unprocessed. When swapping with `low`, advance `mid` because `low` only contains a processed `1` (or `mid == low`).
- The counting approach requires two passes; interviewers often specifically ask for single-pass.
- The overwrite approach avoids swaps entirely — writing a `0` cascades writes of `2`, `1`, `0` at their respective pointers.
- Generalizes to k-way partitioning, but for exactly 3 values Dutch Flag is optimal.

---

## Patterns Summary

| Pattern | Problems |
|---------|----------|
| **Hash Map Lookup** | Two Sum, Subarray Sum |
| **Two Pointers** | 3Sum, Container With Most Water, Sorted Two Sum |
| **Sliding Window** | Longest Unique Substring, Character Replacement, Minimum Window |
| **Monotonic Deque** | Sliding Window Maximum |
| **Prefix Sum** | Subarray Sum, Product Except Self, Maximum Subarray |
| **Kadane's Algorithm** | Maximum Subarray Sum |
| **Read/Write Pointer** | Move Zeroes |
| **Dutch National Flag** | Sort Colors |
