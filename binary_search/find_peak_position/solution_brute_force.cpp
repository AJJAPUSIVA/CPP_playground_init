#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums){
    for(int i=0;i<(int)nums.size();++i){ long long l=i?nums[i-1]:LLONG_MIN,r=i+1<(int)nums.size()?nums[i+1]:LLONG_MIN; if(nums[i]>l&&nums[i]>r)return i;} return -1;
}
}  // namespace brute_force
