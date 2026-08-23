#include "../../include/playground_types.hpp"

namespace brute_force {
void dfs(std::vector<std::vector<char>>&g,int r,int c){if(r<0||c<0||r>=static_cast<int>(g.size())||c>=static_cast<int>(g[0].size())||g[r][c]!='1')return;g[r][c]='0';dfs(g,r+1,c);dfs(g,r-1,c);dfs(g,r,c+1);dfs(g,r,c-1);}
int solve(std::vector<std::vector<char>>g){if(g.empty())return 0;int ans=0;for(int r=0;r<static_cast<int>(g.size());++r)for(int c=0;c<static_cast<int>(g[0].size());++c)if(g[r][c]=='1'){++ans;dfs(g,r,c);}return ans;}
}  // namespace brute_force
