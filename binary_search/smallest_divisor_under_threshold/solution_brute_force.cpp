#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums,int threshold){
    int mx=*std::max_element(nums.begin(),nums.end());
    for(int d=1;d<=mx;++d){long long s=0;for(int x:nums)s+=(x+d-1)/d;if(s<=threshold)return d;}return mx;
}
}  // namespace brute_force
