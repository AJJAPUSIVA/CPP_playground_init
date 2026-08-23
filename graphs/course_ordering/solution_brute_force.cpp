#include "../../include/playground_types.hpp"

namespace brute_force {
bool dfs(int u,const std::vector<std::vector<int>>&g,std::vector<int>&s,std::vector<int>&out){if(s[u]==1)return false;if(s[u]==2)return true;s[u]=1;for(int v:g[u])if(!dfs(v,g,s,out))return false;s[u]=2;out.push_back(u);return true;}
std::vector<int> solve(int n,const std::vector<std::pair<int,int>>&p){std::vector<std::vector<int>>g(n);for(auto [c,pre]:p)g[pre].push_back(c);std::vector<int>s(n),out;for(int i=0;i<n;++i)if(!s[i]&&!dfs(i,g,s,out))return{};std::reverse(out.begin(),out.end());return out;}
}  // namespace brute_force
