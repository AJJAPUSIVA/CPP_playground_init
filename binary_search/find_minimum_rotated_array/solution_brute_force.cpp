#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums){return *std::min_element(nums.begin(),nums.end());}
}  // namespace brute_force
