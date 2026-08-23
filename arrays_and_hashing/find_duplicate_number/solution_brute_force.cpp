#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums) {
    std::unordered_set<int> seen;
    for(int x:nums) if(!seen.insert(x).second) return x;
    return -1;
}
}  // namespace brute_force
