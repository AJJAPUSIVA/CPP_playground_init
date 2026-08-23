#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& nums,int target){
    int l=0,r=nums.size(); while(l<r){int m=l+(r-l)/2; if(nums[m]<target)l=m+1;else r=m;} return l;
}
}  // namespace optimal
