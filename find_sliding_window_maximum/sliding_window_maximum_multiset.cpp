#include <cstddef>
#include <set>
#include <vector>

std::vector<int> slidingWindowMaximumMultiset(
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

    // Multiset keeps elements sorted; rbegin()
    // gives the maximum in O(1). Insert and erase
    // are O(log k).
    std::multiset<int> windowElements;

    for (std::size_t i = 0; i < nums.size(); ++i) {
        windowElements.insert(nums[i]);

        // Remove the element leaving the window.
        if (i >= windowSize) {
            const auto leaving =
                windowElements.find(
                    nums[i - windowSize]
                );
            windowElements.erase(leaving);
        }

        // Record maximum once window is full.
        if (i >= windowSize - 1) {
            result.push_back(
                *windowElements.rbegin()
            );
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
        slidingWindowMaximumMultiset(nums, windowSize);

    for (const int value : result) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
