#include <cstddef>
#include <deque>
#include <vector>

std::vector<int> slidingWindowMaximum(
    const std::vector<int>& nums,
    std::size_t windowSize
) {
    if (nums.empty() || windowSize == 0 ||
        windowSize > nums.size()) {
        return {};
    }

    const std::size_t resultCount =
        nums.size() - windowSize + 1;

    std::vector<int> result;
    result.reserve(resultCount);

    // Stores indices. Front is always the index of
    // the current window maximum. Elements are kept
    // in decreasing order of their values.
    std::deque<std::size_t> candidates;

    for (std::size_t right = 0;
         right < nums.size();
         ++right) {

        // Remove indices that have fallen out of
        // the current window.
        while (!candidates.empty() &&
               candidates.front() + windowSize <= right) {
            candidates.pop_front();
        }

        // Remove from back any indices whose values
        // are smaller than the incoming element.
        // They can never be a window maximum while
        // nums[right] is in the window.
        while (!candidates.empty() &&
               nums[candidates.back()] <= nums[right]) {
            candidates.pop_back();
        }

        candidates.push_back(right);

        // Once we have filled the first full window,
        // the front of the deque is our maximum.
        if (right >= windowSize - 1) {
            result.push_back(nums[candidates.front()]);
        }
    }

    return result;
}

#include <iostream>

int main() {
    const std::vector<int> nums{
        1, 3, -1, -3, 5, 3, 6, 7
    };
    const std::size_t windowSize = 3;

    const auto result =
        slidingWindowMaximum(nums, windowSize);

    for (const int value : result) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
