#include <algorithm>
#include <limits>
#include <vector>

long long maximumSubarrayPrefix(
    const std::vector<int>& nums
) {
    if (nums.empty()) {
        return 0;
    }

    long long prefixSum = 0;
    long long minimumPrefix = 0;

    long long best =
        std::numeric_limits<long long>::lowest();

    for (int value : nums) {
        prefixSum += value;

        best = std::max(
            best,
            prefixSum - minimumPrefix
        );

        minimumPrefix =
            std::min(minimumPrefix, prefixSum);
    }

    return best;
}
