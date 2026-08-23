#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<std::vector<int>>&g){if(g.empty()||g[0].empty())return 0;std::vector<long long>dp(g[0].size(),1LL<<60);dp[0]=0;for(const auto&row:g)for(std::size_t c=0;c<row.size();++c)dp[c]=row[c]+std::min(dp[c],c?dp[c-1]:(1LL<<60));return dp.back();}
}  // namespace optimal
