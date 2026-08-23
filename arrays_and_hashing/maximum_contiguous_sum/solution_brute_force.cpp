#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>& nums) {
    if (nums.empty()) return 0;
    long long best = std::numeric_limits<long long>::lowest();
    for (std::size_t i = 0; i < nums.size(); ++i) {
        long long sum = 0;
        for (std::size_t j = i; j < nums.size(); ++j) {
            sum += nums[j];
            best = std::max(best, sum);
        }
    }
    return best;
}
}  // namespace brute_force
