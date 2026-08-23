#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& nums,int threshold){
    int l=1,r=*std::max_element(nums.begin(),nums.end());
    while(l<r){int d=l+(r-l)/2;long long s=0;for(int x:nums)s+=(x+d-1)/d;if(s<=threshold)r=d;else l=d+1;}return l;
}
}  // namespace optimal
