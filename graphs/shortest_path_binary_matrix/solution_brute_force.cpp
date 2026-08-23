#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<std::vector<int>>&g){if(g.empty()||g[0].empty()||g[0][0]||g.back().back())return-1;int n=g.size(),m=g[0].size(),best=1e9;std::vector<std::vector<char>>seen(n,std::vector<char>(m));std::function<void(int,int,int)>dfs=[&](int r,int c,int d){if(d>=best)return;if(r==n-1&&c==m-1){best=d;return;}seen[r][c]=1;for(int dr=-1;dr<=1;++dr)for(int dc=-1;dc<=1;++dc)if(dr||dc){int nr=r+dr,nc=c+dc;if(nr>=0&&nc>=0&&nr<n&&nc<m&&!g[nr][nc]&&!seen[nr][nc])dfs(nr,nc,d+1);}seen[r][c]=0;};dfs(0,0,1);return best==1000000000?-1:best;}
}  // namespace brute_force
