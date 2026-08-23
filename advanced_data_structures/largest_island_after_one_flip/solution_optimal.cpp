#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<std::vector<int>>g){int n=g.size();if(!n)return 0;std::vector<int>sz{0,0};int id=2;static const int d[5]={1,0,-1,0,1};for(int r=0;r<n;++r)for(int c=0;c<n;++c)if(g[r][c]==1){int cnt=0;std::queue<std::pair<int,int>>q;q.push({r,c});g[r][c]=id;while(!q.empty()){auto[x,y]=q.front();q.pop();++cnt;for(int k=0;k<4;++k){int nx=x+d[k],ny=y+d[k+1];if(nx>=0&&ny>=0&&nx<n&&ny<n&&g[nx][ny]==1){g[nx][ny]=id;q.push({nx,ny});}}}sz.push_back(cnt);++id;}int best=0;for(int x:sz)best=std::max(best,x);for(int r=0;r<n;++r)for(int c=0;c<n;++c)if(g[r][c]==0){std::set<int>ids;int cur=1;for(int k=0;k<4;++k){int nr=r+d[k],nc=c+d[k+1];if(nr>=0&&nc>=0&&nr<n&&nc<n&&g[nr][nc]>=2&&ids.insert(g[nr][nc]).second)cur+=sz[g[nr][nc]];}best=std::max(best,cur);}return best?n*n==best?best:best:n*n;}
}  // namespace optimal
