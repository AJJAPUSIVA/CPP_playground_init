#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>& nums) {
    if (nums.empty()) return 0;
    long long current = nums.front(), best = current;
    for (std::size_t i = 1; i < nums.size(); ++i) {
        current = std::max<long long>(nums[i], current + nums[i]);
        best = std::max(best, current);
    }
    return best;
}
}  // namespace optimal
