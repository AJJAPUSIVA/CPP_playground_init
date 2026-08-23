#include "../../include/playground_types.hpp"

namespace optimal {
void bfs(const std::vector<std::vector<int>>&h,std::queue<std::pair<int,int>>q,std::vector<std::vector<char>>&s){int m=h.size(),n=h[0].size();static const int d[5]={1,0,-1,0,1};while(!q.empty()){auto[r,c]=q.front();q.pop();for(int k=0;k<4;++k){int nr=r+d[k],nc=c+d[k+1];if(nr>=0&&nc>=0&&nr<m&&nc<n&&!s[nr][nc]&&h[nr][nc]>=h[r][c]){s[nr][nc]=1;q.push({nr,nc});}}}}
std::vector<std::pair<int,int>> solve(const std::vector<std::vector<int>>&h){if(h.empty())return{};int m=h.size(),n=h[0].size();std::vector<std::vector<char>>p(m,std::vector<char>(n)),a=p;std::queue<std::pair<int,int>>qp,qa;for(int r=0;r<m;++r){p[r][0]=1;qp.push({r,0});a[r][n-1]=1;qa.push({r,n-1});}for(int c=0;c<n;++c){if(!p[0][c]){p[0][c]=1;qp.push({0,c});}if(!a[m-1][c]){a[m-1][c]=1;qa.push({m-1,c});}}bfs(h,qp,p);bfs(h,qa,a);std::vector<std::pair<int,int>>o;for(int r=0;r<m;++r)for(int c=0;c<n;++c)if(p[r][c]&&a[r][c])o.push_back({r,c});return o;}
}  // namespace optimal
