#include <cassert>
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

    std::deque<std::size_t> candidates;

    for (std::size_t right = 0;
         right < nums.size();
         ++right) {

        while (!candidates.empty() &&
               candidates.front() + windowSize <= right) {
            candidates.pop_front();
        }

        while (!candidates.empty() &&
               nums[candidates.back()] <= nums[right]) {
            candidates.pop_back();
        }

        candidates.push_back(right);

        if (right >= windowSize - 1) {
            result.push_back(nums[candidates.front()]);
        }
    }

    return result;
}

void runTests() {
    // Standard example.
    {
        const std::vector<int> nums{
            1, 3, -1, -3, 5, 3, 6, 7
        };
        const auto result =
            slidingWindowMaximum(nums, 3);
        const std::vector<int> expected{
            3, 3, 5, 5, 6, 7
        };
        assert(result == expected);
    }

    // Window size equals array size.
    {
        const std::vector<int> nums{4, 2, 7, 1};
        const auto result =
            slidingWindowMaximum(nums, 4);
        const std::vector<int> expected{7};
        assert(result == expected);
    }

    // Window size of 1 returns the array itself.
    {
        const std::vector<int> nums{5, 3, 8, 1};
        const auto result =
            slidingWindowMaximum(nums, 1);
        assert(result == nums);
    }

    // All elements are the same.
    {
        const std::vector<int> nums{4, 4, 4, 4, 4};
        const auto result =
            slidingWindowMaximum(nums, 3);
        const std::vector<int> expected{4, 4, 4};
        assert(result == expected);
    }

    // Descending order — worst case for naive deque
    // (every element becomes the new max).
    {
        const std::vector<int> nums{9, 7, 5, 3, 1};
        const auto result =
            slidingWindowMaximum(nums, 2);
        const std::vector<int> expected{9, 7, 5, 3};
        assert(result == expected);
    }

    // Ascending order — best case for deque
    // (back is always popped immediately).
    {
        const std::vector<int> nums{1, 3, 5, 7, 9};
        const auto result =
            slidingWindowMaximum(nums, 2);
        const std::vector<int> expected{3, 5, 7, 9};
        assert(result == expected);
    }

    // Negative numbers.
    {
        const std::vector<int> nums{
            -5, -3, -7, -1, -4
        };
        const auto result =
            slidingWindowMaximum(nums, 3);
        const std::vector<int> expected{-3, -1, -1};
        assert(result == expected);
    }

    // Empty input.
    {
        const std::vector<int> nums{};
        const auto result =
            slidingWindowMaximum(nums, 3);
        assert(result.empty());
    }

    // Window larger than array.
    {
        const std::vector<int> nums{1, 2};
        const auto result =
            slidingWindowMaximum(nums, 5);
        assert(result.empty());
    }

    // Single element.
    {
        const std::vector<int> nums{42};
        const auto result =
            slidingWindowMaximum(nums, 1);
        const std::vector<int> expected{42};
        assert(result == expected);
    }

    // Duplicates at window boundaries.
    {
        const std::vector<int> nums{
            2, 1, 3, 1, 3, 1, 2
        };
        const auto result =
            slidingWindowMaximum(nums, 3);
        const std::vector<int> expected{
            3, 3, 3, 3, 3
        };
        assert(result == expected);
    }
}

int main() {
    runTests();
    return 0;
}
