#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){int n=a.size();std::vector<int>b(n+2,1);for(int i=0;i<n;++i)b[i+1]=a[i];std::vector<std::vector<int>>dp(n+2,std::vector<int>(n+2));for(int len=1;len<=n;++len)for(int l=1;l+len-1<=n;++l){int r=l+len-1;for(int k=l;k<=r;++k)dp[l][r]=std::max(dp[l][r],dp[l][k-1]+b[l-1]*b[k]*b[r+1]+dp[k+1][r]);}return dp[1][n];}
}  // namespace optimal
