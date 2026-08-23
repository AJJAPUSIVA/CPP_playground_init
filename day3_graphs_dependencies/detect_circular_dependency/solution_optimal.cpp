#include "../../include/playground_types.hpp"

namespace optimal {
bool dfs(int u,const std::vector<std::vector<int>>&g,std::vector<int>&s){if(s[u]==1)return true;if(s[u]==2)return false;s[u]=1;for(int v:g[u])if(dfs(v,g,s))return true;s[u]=2;return false;}bool solve(int n,const std::vector<std::pair<int,int>>&e){std::vector<std::vector<int>>g(n);for(auto[a,b]:e)g[a].push_back(b);std::vector<int>s(n);for(int i=0;i<n;++i)if(!s[i]&&dfs(i,g,s))return true;return false;}
}  // namespace optimal
