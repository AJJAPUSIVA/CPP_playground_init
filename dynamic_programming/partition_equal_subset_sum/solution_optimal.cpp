#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<int>&a){int s=std::accumulate(a.begin(),a.end(),0);if(s&1)return false;int t=s/2;std::vector<char>dp(t+1);dp[0]=1;for(int x:a)for(int v=t;v>=x;--v)dp[v]=dp[v]||dp[v-x];return dp[t];}
}  // namespace optimal
