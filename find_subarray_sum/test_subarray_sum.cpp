#include <cassert>
#include <vector>

void testSubarraySumEqualsK() {
    {
        const std::vector<int> nums{1, 1, 1};

        assert(
            subarraySumEqualsK(nums, 2) == 2
        );
    }

    {
        const std::vector<int> nums{1, 2, 3};

        assert(
            subarraySumEqualsK(nums, 3) == 2
        );
    }

    {
        const std::vector<int> nums{1, -1, 0};

        assert(
            subarraySumEqualsK(nums, 0) == 3
        );
    }

    {
        const std::vector<int> nums{0, 0, 0};

        assert(
            subarraySumEqualsK(nums, 0) == 6
        );
    }

    {
        const std::vector<int> nums{-1, -1, 1};

        assert(
            subarraySumEqualsK(nums, 0) == 1
        );
    }

    {
        const std::vector<int> nums{};

        assert(
            subarraySumEqualsK(nums, 0) == 0
        );
    }
}
