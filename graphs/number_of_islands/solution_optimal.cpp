#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<std::vector<char>>g){if(g.empty())return 0;int ans=0;static const int d[5]={1,0,-1,0,1};for(int r=0;r<static_cast<int>(g.size());++r)for(int c=0;c<static_cast<int>(g[0].size());++c)if(g[r][c]=='1'){++ans;std::queue<std::pair<int,int>>q;q.push({r,c});g[r][c]='0';while(!q.empty()){auto [x,y]=q.front();q.pop();for(int k=0;k<4;++k){int nx=x+d[k],ny=y+d[k+1];if(nx>=0&&ny>=0&&nx<static_cast<int>(g.size())&&ny<static_cast<int>(g[0].size())&&g[nx][ny]=='1'){g[nx][ny]='0';q.push({nx,ny});}}}}return ans;}
}  // namespace optimal
