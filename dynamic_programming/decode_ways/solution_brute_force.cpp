#include "../../include/playground_types.hpp"

namespace brute_force {
int rec(const std::string&s,int i){if(i==static_cast<int>(s.size()))return 1;if(s[i]=='0')return 0;int ans=rec(s,i+1);if(i+1<static_cast<int>(s.size())&&std::stoi(s.substr(i,2))<=26)ans+=rec(s,i+2);return ans;}
int solve(const std::string&s){return s.empty()?0:rec(s,0);}
}  // namespace brute_force
