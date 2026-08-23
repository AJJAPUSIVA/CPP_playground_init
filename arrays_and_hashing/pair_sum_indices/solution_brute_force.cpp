#include "../../include/playground_types.hpp"

namespace brute_force {
std::pair<int,int> solve(const std::vector<int>& nums, int target) {
    for (int i = 0; i < static_cast<int>(nums.size()); ++i)
        for (int j = i + 1; j < static_cast<int>(nums.size()); ++j)
            if (nums[i] + nums[j] == target) return {i,j};
    return {-1,-1};
}
}  // namespace brute_force
