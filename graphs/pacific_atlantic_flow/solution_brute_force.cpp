#include "../../include/playground_types.hpp"

namespace brute_force {
bool reach(const std::vector<std::vector<int>>&h,int sr,int sc,bool pac){int m=h.size(),n=h[0].size();std::queue<std::pair<int,int>>q;q.push({sr,sc});std::vector<std::vector<char>>s(m,std::vector<char>(n));s[sr][sc]=1;static const int d[5]={1,0,-1,0,1};while(!q.empty()){auto[r,c]=q.front();q.pop();if(pac&&(r==0||c==0))return true;if(!pac&&(r==m-1||c==n-1))return true;for(int k=0;k<4;++k){int nr=r+d[k],nc=c+d[k+1];if(nr>=0&&nc>=0&&nr<m&&nc<n&&!s[nr][nc]&&h[nr][nc]<=h[r][c]){s[nr][nc]=1;q.push({nr,nc});}}}return false;}
std::vector<std::pair<int,int>> solve(const std::vector<std::vector<int>>&h){std::vector<std::pair<int,int>>o;if(h.empty())return o;for(int r=0;r<static_cast<int>(h.size());++r)for(int c=0;c<static_cast<int>(h[0].size());++c)if(reach(h,r,c,true)&&reach(h,r,c,false))o.push_back({r,c});return o;}
}  // namespace brute_force
