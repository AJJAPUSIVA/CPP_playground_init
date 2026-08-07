#include <algorithm>
#include <limits>
#include <vector>

long long maximumSubarrayBruteForce(
    const std::vector<int>& nums
) {
    long long best =
        std::numeric_limits<long long>::lowest();

    for (std::size_t start = 0;
         start < nums.size();
         ++start) {

        long long sum = 0;

        for (std::size_t end = start;
             end < nums.size();
             ++end) {

            sum += nums[end];
            best = std::max(best, sum);
        }
    }

    return best;
}
