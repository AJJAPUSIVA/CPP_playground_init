#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<std::pair<std::string,std::string>>&e,const std::string&s,const std::string&t){for(int depth=0;depth<=static_cast<int>(e.size());++depth){std::function<bool(const std::string&,int)>dfs=[&](const std::string&u,int left){if(u==t)return true;if(!left)return false;for(auto&[a,b]:e)if(a==u&&dfs(b,left-1))return true;return false;};if(dfs(s,depth))return depth;}return-1;}
}  // namespace brute_force
