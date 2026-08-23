#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<std::vector<int>>g){if(g.empty())return 0;int minutes=0;while(true){auto next=g;bool changed=false, fresh=false;for(int r=0;r<static_cast<int>(g.size());++r)for(int c=0;c<static_cast<int>(g[0].size());++c)if(g[r][c]==1){fresh=true;static const int d[5]={1,0,-1,0,1};for(int k=0;k<4;++k){int nr=r+d[k],nc=c+d[k+1];if(nr>=0&&nc>=0&&nr<static_cast<int>(g.size())&&nc<static_cast<int>(g[0].size())&&g[nr][nc]==2){next[r][c]=2;changed=true;break;}}}if(!fresh)return minutes;if(!changed)return-1;g.swap(next);++minutes;}}
}  // namespace brute_force
