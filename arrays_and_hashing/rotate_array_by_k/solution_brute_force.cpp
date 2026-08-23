#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>& nums, std::size_t k) {
    if (nums.empty()) return {};
    k %= nums.size();
    std::vector<int> out(nums.size());
    for (std::size_t i=0;i<nums.size();++i) out[(i+k)%nums.size()] = nums[i];
    return out;
}
}  // namespace brute_force
