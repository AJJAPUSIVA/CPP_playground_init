#include "../../include/playground_types.hpp"

namespace brute_force {
bool dfs(int u,const std::vector<std::vector<int>>&g,std::vector<int>&state){if(state[u]==1)return false;if(state[u]==2)return true;state[u]=1;for(int v:g[u])if(!dfs(v,g,state))return false;state[u]=2;return true;}
bool solve(int n,const std::vector<std::pair<int,int>>&p){std::vector<std::vector<int>>g(n);for(auto [c,pre]:p)g[c].push_back(pre);std::vector<int>s(n);for(int i=0;i<n;++i)if(!dfs(i,g,s))return false;return true;}
}  // namespace brute_force
