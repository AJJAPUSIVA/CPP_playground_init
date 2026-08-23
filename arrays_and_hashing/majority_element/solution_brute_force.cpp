#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums){
    std::unordered_map<int,int> c;
    for(int x:nums) if(++c[x] > static_cast<int>(nums.size()/2)) return x;
    return 0;
}
}  // namespace brute_force
