#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::string&s,const std::string&t,int i,int j){if(j==static_cast<int>(t.size()))return 1;if(i==static_cast<int>(s.size()))return 0;long long ans=rec(s,t,i+1,j);if(s[i]==t[j])ans+=rec(s,t,i+1,j+1);return ans;}
long long solve(const std::string&s,const std::string&t){return rec(s,t,0,0);}
}  // namespace brute_force
