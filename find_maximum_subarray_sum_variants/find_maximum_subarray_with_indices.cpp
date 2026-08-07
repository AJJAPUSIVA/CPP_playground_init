#include <algorithm>
#include <cstddef>
#include <optional>
#include <vector>

struct MaximumSubarray {
    long long sum;
    std::size_t start;
    std::size_t end;
};

std::optional<MaximumSubarray>
findMaximumSubarray(const std::vector<int>& nums) {
    if (nums.empty()) {
        return std::nullopt;
    }

    long long currentSum = nums[0];
    long long bestSum = nums[0];

    std::size_t currentStart = 0;

    std::size_t bestStart = 0;
    std::size_t bestEnd = 0;

    for (std::size_t i = 1; i < nums.size(); ++i) {
        const long long value = nums[i];

        if (value > currentSum + value) {
            currentSum = value;
            currentStart = i;
        } else {
            currentSum += value;
        }

        if (currentSum > bestSum) {
            bestSum = currentSum;
            bestStart = currentStart;
            bestEnd = i;
        }
    }

    return MaximumSubarray{
        bestSum,
        bestStart,
        bestEnd
    };
}
