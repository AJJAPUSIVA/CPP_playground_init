#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(std::vector<int> nums, std::size_t k) {
    if (nums.empty()) return nums;
    k %= nums.size();
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin()+k);
    std::reverse(nums.begin()+k, nums.end());
    return nums;
}
}  // namespace optimal
