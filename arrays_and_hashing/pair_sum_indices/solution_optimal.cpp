#include "../../include/playground_types.hpp"

namespace optimal {
std::pair<int,int> solve(const std::vector<int>& nums, int target) {
    std::unordered_map<int,int> seen;
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        auto it = seen.find(target - nums[i]);
        if (it != seen.end()) return {it->second, i};
        seen.emplace(nums[i], i);
    }
    return {-1,-1};
}
}  // namespace optimal
