#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<std::vector<int>>g){if(g.empty()||g[0].empty()||g[0][0]||g.back().back())return-1;int n=g.size(),m=g[0].size();std::queue<std::pair<int,int>>q;q.push({0,0});g[0][0]=1;int dist=1;while(!q.empty()){int sz=q.size();while(sz--){auto[r,c]=q.front();q.pop();if(r==n-1&&c==m-1)return dist;for(int dr=-1;dr<=1;++dr)for(int dc=-1;dc<=1;++dc)if(dr||dc){int nr=r+dr,nc=c+dc;if(nr>=0&&nc>=0&&nr<n&&nc<m&&!g[nr][nc]){g[nr][nc]=1;q.push({nr,nc});}}}++dist;}return-1;}
}  // namespace optimal
