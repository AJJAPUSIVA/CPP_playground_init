#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::string&s,const std::vector<std::string>&w){std::unordered_set<std::string>d(w.begin(),w.end());std::vector<char>dp(s.size()+1);dp[0]=1;for(std::size_t i=1;i<=s.size();++i)for(std::size_t j=0;j<i;++j)if(dp[j]&&d.count(s.substr(j,i-j))){dp[i]=1;break;}return dp.back();}
}  // namespace optimal
