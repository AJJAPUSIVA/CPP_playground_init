#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& nums,int k){
    std::vector<int>d;for(int i=0;i<(int)nums.size();++i)for(int j=i+1;j<(int)nums.size();++j)d.push_back(std::abs(nums[i]-nums[j]));std::nth_element(d.begin(),d.begin()+k-1,d.end());return d[k-1];
}
}  // namespace brute_force
