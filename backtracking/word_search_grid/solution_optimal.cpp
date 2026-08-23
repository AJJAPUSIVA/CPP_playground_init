#include "../../include/playground_types.hpp"

namespace optimal {
bool dfs(std::vector<std::vector<char>>& b, const std::string& w, std::size_t k, int r, int c) {
    if (k == w.size()) return true;
    if (r<0||c<0||r>=static_cast<int>(b.size())||c>=static_cast<int>(b[0].size())||b[r][c]!=w[k]) return false;
    char x=b[r][c]; b[r][c]='\0';
    static const int d[5]={1,0,-1,0,1};
    for(int i=0;i<4;++i) if(dfs(b,w,k+1,r+d[i],c+d[i+1])) { b[r][c]=x; return true; }
    b[r][c]=x; return false;
}
bool solve(std::vector<std::vector<char>> b, const std::string& w) {
    if (w.empty()) return true; if(b.empty()||b[0].empty()) return false;
    std::array<int,256> board{}, need{};
    for(auto& row:b) for(unsigned char ch:row) ++board[ch];
    for(unsigned char ch:w) if(++need[ch]>board[ch]) return false;
    for(int r=0;r<static_cast<int>(b.size());++r) for(int c=0;c<static_cast<int>(b[0].size());++c)
        if(dfs(b,w,0,r,c)) return true;
    return false;
}
}  // namespace optimal
