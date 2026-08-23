#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<int>> solve(const std::vector<int>& nums) {
    std::vector<std::vector<int>> out;
    const std::size_t n = nums.size();
    const std::size_t total = static_cast<std::size_t>(1) << n;
    for (std::size_t mask = 0; mask < total; ++mask) {
        std::vector<int> cur;
        for (std::size_t i = 0; i < n; ++i)
            if (mask & (static_cast<std::size_t>(1) << i)) cur.push_back(nums[i]);
        out.push_back(std::move(cur));
    }
    return out;
}
}  // namespace brute_force
