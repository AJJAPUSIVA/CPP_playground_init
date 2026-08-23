#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<std::vector<int>>& m){
    if(m.empty()) return {};
    int top=0,bottom=static_cast<int>(m.size())-1,left=0,right=static_cast<int>(m[0].size())-1;
    std::vector<int> out;
    while(top<=bottom&&left<=right){
        for(int c=left;c<=right;++c) out.push_back(m[top][c]); ++top;
        for(int r=top;r<=bottom;++r) out.push_back(m[r][right]); --right;
        if(top<=bottom){ for(int c=right;c>=left;--c) out.push_back(m[bottom][c]); --bottom; }
        if(left<=right){ for(int r=bottom;r>=top;--r) out.push_back(m[r][left]); ++left; }
    }
    return out;
}
}  // namespace optimal
