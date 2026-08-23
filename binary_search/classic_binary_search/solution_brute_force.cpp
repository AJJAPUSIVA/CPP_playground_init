#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums,int target){
    for(int i=0;i<(int)nums.size();++i) if(nums[i]==target) return i;
    return -1;
}
}  // namespace brute_force
