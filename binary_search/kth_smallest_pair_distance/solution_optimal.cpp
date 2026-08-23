#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<int> nums,int k){
    std::sort(nums.begin(),nums.end());int l=0,r=nums.back()-nums.front();
    auto count=[&](int d){long long c=0;int left=0;for(int right=0;right<(int)nums.size();++right){while(nums[right]-nums[left]>d)++left;c+=right-left;}return c;};
    while(l<r){int m=l+(r-l)/2;if(count(m)>=k)r=m;else l=m+1;}return l;
}
}  // namespace optimal
