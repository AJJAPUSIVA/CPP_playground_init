#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a){if(a.empty())return 0;std::vector<int>dp(a.size(),1);int best=1;for(std::size_t i=0;i<a.size();++i)for(std::size_t j=0;j<i;++j)if(a[j]<a[i])dp[i]=std::max(dp[i],dp[j]+1);for(int x:dp)best=std::max(best,x);return best;}
}  // namespace brute_force
