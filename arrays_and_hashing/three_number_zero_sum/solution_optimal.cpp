#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<int>> solve(std::vector<int> nums){
    std::sort(nums.begin(),nums.end());
    std::vector<std::vector<int>> out;
    for(int i=0;i<static_cast<int>(nums.size());++i){
        if(i&&nums[i]==nums[i-1]) continue;
        int l=i+1,r=static_cast<int>(nums.size())-1;
        while(l<r){
            long long s=(long long)nums[i]+nums[l]+nums[r];
            if(s<0) ++l; else if(s>0) --r; else{
                out.push_back({nums[i],nums[l],nums[r]}); ++l; --r;
                while(l<r&&nums[l]==nums[l-1]) ++l;
                while(l<r&&nums[r]==nums[r+1]) --r;
            }
        }
    }
    return out;
}
}  // namespace optimal
