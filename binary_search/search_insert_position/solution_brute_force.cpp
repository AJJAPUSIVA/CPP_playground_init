#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums,int target){
    int i=0; while(i<(int)nums.size()&&nums[i]<target)++i; return i;
}
}  // namespace brute_force
