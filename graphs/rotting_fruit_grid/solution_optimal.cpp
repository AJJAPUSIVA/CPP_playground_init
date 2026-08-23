#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<std::vector<int>>g){if(g.empty())return 0;std::queue<std::pair<int,int>>q;int fresh=0;for(int r=0;r<static_cast<int>(g.size());++r)for(int c=0;c<static_cast<int>(g[0].size());++c){if(g[r][c]==2)q.push({r,c});else if(g[r][c]==1)++fresh;}int min=0;static const int d[5]={1,0,-1,0,1};while(fresh&&!q.empty()){int sz=q.size();++min;while(sz--){auto [r,c]=q.front();q.pop();for(int k=0;k<4;++k){int nr=r+d[k],nc=c+d[k+1];if(nr>=0&&nc>=0&&nr<static_cast<int>(g.size())&&nc<static_cast<int>(g[0].size())&&g[nr][nc]==1){g[nr][nc]=2;--fresh;q.push({nr,nc});}}}}return fresh?-1:min;}
}  // namespace optimal
