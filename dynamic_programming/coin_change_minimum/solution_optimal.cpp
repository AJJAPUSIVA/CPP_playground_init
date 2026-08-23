#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& c,int a){if(a<0)return-1;std::vector<int> dp(a+1,a+1);dp[0]=0;for(int x=1;x<=a;++x)for(int coin:c)if(coin<=x)dp[x]=std::min(dp[x],dp[x-coin]+1);return dp[a]>a?-1:dp[a];}
}  // namespace optimal
