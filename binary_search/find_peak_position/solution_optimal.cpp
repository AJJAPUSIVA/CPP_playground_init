#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& nums){
    if(nums.empty())return -1; int l=0,r=nums.size()-1; while(l<r){int m=l+(r-l)/2; if(nums[m]>nums[m+1])r=m;else l=m+1;} return l;
}
}  // namespace optimal
