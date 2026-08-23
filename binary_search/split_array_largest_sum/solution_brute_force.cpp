#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>& nums,int k){
    std::function<long long(int,int)> dfs=[&](int i,int parts){if(parts==1)return std::accumulate(nums.begin()+i,nums.end(),0LL);long long best=LLONG_MAX,s=0;for(int j=i;j<=int(nums.size())-parts;++j){s+=nums[j];best=std::min(best,std::max(s,dfs(j+1,parts-1)));}return best;};return dfs(0,k);
}
}  // namespace brute_force
