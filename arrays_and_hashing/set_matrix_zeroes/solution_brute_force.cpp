#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<int>> solve(std::vector<std::vector<int>> m){
    if(m.empty()) return m;
    std::set<int> rows,cols;
    for(int r=0;r<(int)m.size();++r)for(int c=0;c<(int)m[0].size();++c)if(m[r][c]==0){rows.insert(r);cols.insert(c);}
    for(int r:rows) std::fill(m[r].begin(),m[r].end(),0);
    for(int c:cols) for(auto& row:m) row[c]=0;
    return m;
}
}  // namespace brute_force
