#include <algorithm>
#include <cstddef>
#include <vector>

std::vector<int> slidingWindowMaximumBruteForce(
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

    for (std::size_t windowStart = 0;
         windowStart < resultCount;
         ++windowStart) {

        int windowMax = nums[windowStart];

        for (std::size_t offset = 1;
             offset < windowSize;
             ++offset) {

            windowMax = std::max(
                windowMax,
                nums[windowStart + offset]
            );
        }

        result.push_back(windowMax);
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
        slidingWindowMaximumBruteForce(nums, windowSize);

    for (const int value : result) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
