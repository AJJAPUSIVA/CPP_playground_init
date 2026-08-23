#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>& nums, long long k){
    long long ans=0;
    for(std::size_t i=0;i<nums.size();++i){
        long long s=0;
        for(std::size_t j=i;j<nums.size();++j){ s+=nums[j]; if(s==k) ++ans; }
    }
    return ans;
}
}  // namespace brute_force
