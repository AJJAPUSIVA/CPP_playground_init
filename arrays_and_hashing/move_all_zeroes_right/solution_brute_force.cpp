#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>& nums) {
    std::vector<int> out;
    out.reserve(nums.size());
    for (int x: nums) if (x != 0) out.push_back(x);
    while (out.size() < nums.size()) out.push_back(0);
    return out;
}
}  // namespace brute_force
