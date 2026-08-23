#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<std::vector<int>>& m){
    if(m.empty()) return {};
    std::vector<std::vector<bool>> seen(m.size(),std::vector<bool>(m[0].size()));
    std::vector<int> out; int r=0,c=0,dir=0; int dr[4]={0,1,0,-1},dc[4]={1,0,-1,0};
    for(std::size_t k=0;k<m.size()*m[0].size();++k){
        out.push_back(m[r][c]); seen[r][c]=true;
        int nr=r+dr[dir],nc=c+dc[dir];
        if(nr<0||nc<0||nr>=static_cast<int>(m.size())||nc>=static_cast<int>(m[0].size())||seen[nr][nc]){dir=(dir+1)%4;nr=r+dr[dir];nc=c+dc[dir];}
        r=nr;c=nc;
    }
    return out;
}
}  // namespace brute_force
