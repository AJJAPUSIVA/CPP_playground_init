#include "../../include/playground_types.hpp"

namespace brute_force {
bool dfs(std::vector<std::vector<char>>& b, const std::string& w, int k, int r, int c) {
    if (k == static_cast<int>(w.size())) return true;
    if (r<0||c<0||r>=static_cast<int>(b.size())||c>=static_cast<int>(b[0].size())||b[r][c]!=w[k]) return false;
    char x=b[r][c]; b[r][c]='#';
    bool ok=dfs(b,w,k+1,r+1,c)||dfs(b,w,k+1,r-1,c)||dfs(b,w,k+1,r,c+1)||dfs(b,w,k+1,r,c-1);
    b[r][c]=x; return ok;
}
bool solve(std::vector<std::vector<char>> b, const std::string& w) {
    if (w.empty()) return true; if (b.empty()||b[0].empty()) return false;
    for (int r=0;r<static_cast<int>(b.size());++r) for(int c=0;c<static_cast<int>(b[0].size());++c)
        if (dfs(b,w,0,r,c)) return true;
    return false;
}
}  // namespace brute_force
