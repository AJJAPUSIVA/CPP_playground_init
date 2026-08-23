#include "../../include/playground_types.hpp"

namespace brute_force {
int area(std::vector<std::vector<int>>g){int best=0,n=g.size();for(int r=0;r<n;++r)for(int c=0;c<n;++c)if(g[r][c]){int a=0;std::queue<std::pair<int,int>>q;q.push({r,c});g[r][c]=0;while(!q.empty()){auto[x,y]=q.front();q.pop();++a;static const int d[5]={1,0,-1,0,1};for(int k=0;k<4;++k){int nx=x+d[k],ny=y+d[k+1];if(nx>=0&&ny>=0&&nx<n&&ny<n&&g[nx][ny]){g[nx][ny]=0;q.push({nx,ny});}}}best=std::max(best,a);}return best;}
int solve(std::vector<std::vector<int>>g){int best=area(g),n=g.size();for(int r=0;r<n;++r)for(int c=0;c<n;++c)if(!g[r][c]){g[r][c]=1;best=std::max(best,area(g));g[r][c]=0;}return best;}
}  // namespace brute_force
