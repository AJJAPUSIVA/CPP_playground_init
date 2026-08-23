#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>& c,int a){std::vector<long long> dp(a+1);dp[0]=1;for(int coin:c)for(int x=coin;x<=a;++x)dp[x]+=dp[x-coin];return dp[a];}
}  // namespace optimal
