#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<int>> solve(std::vector<std::vector<int>> m){
    if(m.empty()) return m;
    bool row0=false,col0=false; int R=m.size(),C=m[0].size();
    for(int c=0;c<C;++c) row0|=m[0][c]==0;
    for(int r=0;r<R;++r) col0|=m[r][0]==0;
    for(int r=1;r<R;++r)for(int c=1;c<C;++c)if(m[r][c]==0)m[r][0]=m[0][c]=0;
    for(int r=1;r<R;++r)for(int c=1;c<C;++c)if(m[r][0]==0||m[0][c]==0)m[r][c]=0;
    if(row0) std::fill(m[0].begin(),m[0].end(),0);
    if(col0) for(auto& row:m) row[0]=0;
    return m;
}
}  // namespace optimal
