#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string&s){int n=s.size();if(!n)return 0;std::vector<int>dp(n,1);for(int i=n-2;i>=0;--i){int prev=0;for(int j=i+1;j<n;++j){int old=dp[j];dp[j]=s[i]==s[j]?prev+2:std::max(dp[j],dp[j-1]);prev=old;}}return dp[n-1];}
}  // namespace optimal
