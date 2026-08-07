#include <algorithm>
#include <cstddef>
#include <optional>
#include <vector>

std::optional<long long>
maximumSubarraySum(const std::vector<int>& nums) {
    if (nums.empty()) {
        return std::nullopt;
    }

    long long current = nums[0];
    long long best = nums[0];

    for (std::size_t i = 1; i < nums.size(); ++i) {
        const long long value = nums[i];

        current = std::max(value, current + value);
        best = std::max(best, current);
    }

    return best;
}
