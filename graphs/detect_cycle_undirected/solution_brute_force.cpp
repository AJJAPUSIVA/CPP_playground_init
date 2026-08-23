#include "../../include/playground_types.hpp"

namespace brute_force {
bool dfs(int u,int p,const std::vector<std::vector<int>>&g,std::vector<char>&seen){seen[u]=1;for(int v:g[u]){if(!seen[v]){if(dfs(v,u,g,seen))return true;}else if(v!=p)return true;}return false;}
bool solve(int n,const std::vector<std::pair<int,int>>&e){std::vector<std::vector<int>>g(n);for(auto [a,b]:e){g[a].push_back(b);g[b].push_back(a);}std::vector<char>s(n);for(int i=0;i<n;++i)if(!s[i]&&dfs(i,-1,g,s))return true;return false;}
}  // namespace brute_force
