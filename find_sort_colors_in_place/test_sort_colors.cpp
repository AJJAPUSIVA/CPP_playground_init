#include <cassert>
#include <cstddef>
#include <utility>
#include <vector>

void sortColors(std::vector<int>& nums) {
    if (nums.empty()) {
        return;
    }

    std::size_t low = 0;
    std::size_t mid = 0;
    std::size_t high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low], nums[mid]);
            ++low;
            ++mid;
        } else if (nums[mid] == 1) {
            ++mid;
        } else {
            std::swap(nums[mid], nums[high]);
            if (high == 0) {
                break;
            }
            --high;
        }
    }
}

void runTests() {
    // Standard example.
    {
        std::vector<int> nums{2, 0, 2, 1, 1, 0};
        sortColors(nums);
        const std::vector<int> expected{0, 0, 1, 1, 2, 2};
        assert(nums == expected);
    }

    // Already sorted.
    {
        std::vector<int> nums{0, 0, 1, 1, 2, 2};
        sortColors(nums);
        const std::vector<int> expected{0, 0, 1, 1, 2, 2};
        assert(nums == expected);
    }

    // Reverse sorted.
    {
        std::vector<int> nums{2, 2, 1, 1, 0, 0};
        sortColors(nums);
        const std::vector<int> expected{0, 0, 1, 1, 2, 2};
        assert(nums == expected);
    }

    // All same color.
    {
        std::vector<int> nums{1, 1, 1};
        sortColors(nums);
        const std::vector<int> expected{1, 1, 1};
        assert(nums == expected);
    }

    // Only 0s and 2s.
    {
        std::vector<int> nums{2, 0, 2, 0, 2, 0};
        sortColors(nums);
        const std::vector<int> expected{0, 0, 0, 2, 2, 2};
        assert(nums == expected);
    }

    // Single element.
    {
        std::vector<int> nums{0};
        sortColors(nums);
        const std::vector<int> expected{0};
        assert(nums == expected);
    }

    {
        std::vector<int> nums{2};
        sortColors(nums);
        const std::vector<int> expected{2};
        assert(nums == expected);
    }

    // Two elements.
    {
        std::vector<int> nums{1, 0};
        sortColors(nums);
        const std::vector<int> expected{0, 1};
        assert(nums == expected);
    }

    // Empty.
    {
        std::vector<int> nums{};
        sortColors(nums);
        assert(nums.empty());
    }

    // All 2s at the front.
    {
        std::vector<int> nums{2, 2, 2, 0, 1};
        sortColors(nums);
        const std::vector<int> expected{0, 1, 2, 2, 2};
        assert(nums == expected);
    }

    // Large mixed.
    {
        std::vector<int> nums{
            0, 2, 1, 2, 0, 1, 0, 2, 1, 0
        };
        sortColors(nums);
        const std::vector<int> expected{
            0, 0, 0, 0, 1, 1, 1, 2, 2, 2
        };
        assert(nums == expected);
    }

    // Only 0s.
    {
        std::vector<int> nums{0, 0, 0, 0};
        sortColors(nums);
        const std::vector<int> expected{0, 0, 0, 0};
        assert(nums == expected);
    }

    // Only 2s.
    {
        std::vector<int> nums{2, 2, 2};
        sortColors(nums);
        const std::vector<int> expected{2, 2, 2};
        assert(nums == expected);
    }
}

int main() {
    runTests();
    return 0;
}
