#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::string&s,const std::string&t){std::vector<long long>dp(t.size()+1);dp[0]=1;for(char c:s)for(int j=static_cast<int>(t.size())-1;j>=0;--j)if(c==t[j])dp[j+1]+=dp[j];return dp[t.size()];}
}  // namespace optimal
