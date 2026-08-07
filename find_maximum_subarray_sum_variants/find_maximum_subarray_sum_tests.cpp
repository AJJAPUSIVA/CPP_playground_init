#include <algorithm>
#include <cassert>
#include <vector>

long long maximumSubarraySum(const std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    long long currentSum = nums[0];
    long long bestSum = nums[0];

    for (std::size_t i = 1; i < nums.size(); ++i) {
        const long long value = nums[i];

        currentSum = std::max(
            value,
            currentSum + value
        );

        bestSum = std::max(
            bestSum,
            currentSum
        );
    }

    return bestSum;
}

void runMaximumSubarrayTests() {
    {
        const std::vector<int> nums{
            -2, 1, -3, 4, -1, 2, 1, -5, 4
        };

        assert(maximumSubarraySum(nums) == 6);
    }

    {
        const std::vector<int> nums{5};

        assert(maximumSubarraySum(nums) == 5);
    }

    {
        const std::vector<int> nums{
            -8, -3, -6, -2, -5, -4
        };

        assert(maximumSubarraySum(nums) == -2);
    }

    {
        const std::vector<int> nums{
            1, 2, 3, 4
        };

        assert(maximumSubarraySum(nums) == 10);
    }

    {
        const std::vector<int> nums{
            -1, -2, 5, -1, 3
        };

        assert(maximumSubarraySum(nums) == 7);
    }

    {
        const std::vector<int> nums{
            0, 0, 0
        };

        assert(maximumSubarraySum(nums) == 0);
    }
}

int main() {
    runMaximumSubarrayTests();
    return 0;
}
