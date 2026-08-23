#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>& nums,int k){
    long long l=*std::max_element(nums.begin(),nums.end()),r=std::accumulate(nums.begin(),nums.end(),0LL);
    while(l<r){long long cap=l+(r-l)/2;int parts=1;long long s=0;for(int x:nums){if(s+x>cap){++parts;s=0;}s+=x;}if(parts<=k)r=cap;else l=cap+1;}return l;
}
}  // namespace optimal
