#include "../../include/playground_types.hpp"

namespace brute_force {
bool dfs(int u,int c,const std::vector<std::vector<int>>&g,std::vector<int>&col){if(col[u])return col[u]==c;col[u]=c;for(int v:g[u])if(!dfs(v,-c,g,col))return false;return true;}
bool solve(const std::vector<std::vector<int>>&g){std::vector<int>c(g.size());for(int i=0;i<static_cast<int>(g.size());++i)if(!c[i]&&!dfs(i,1,g,c))return false;return true;}
}  // namespace brute_force
