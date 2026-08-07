#include <algorithm>
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

#include <iostream>

int main() {
    const std::vector<int> nums{
        -2, 1, -3, 4, -1, 2, 1, -5, 4
    };

    std::cout << maximumSubarraySum(nums) << '\n';

    return 0;
}
