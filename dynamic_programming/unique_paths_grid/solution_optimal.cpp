#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(int m,int n){if(m<=0||n<=0)return 0;std::vector<long long>dp(n,1);for(int r=1;r<m;++r)for(int c=1;c<n;++c)dp[c]+=dp[c-1];return dp[n-1];}
}  // namespace optimal
