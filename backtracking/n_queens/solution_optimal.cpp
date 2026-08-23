#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(int n, int row, std::uint64_t cols, std::uint64_t diag1, std::uint64_t diag2,
         std::vector<int>& pos, std::vector<std::vector<std::string>>& out) {
    if (row == n) {
        std::vector<std::string> board(n, std::string(n,'.'));
        for (int r=0;r<n;++r) board[r][pos[r]]='Q';
        out.push_back(board); return;
    }
    for (int c=0;c<n;++c) {
        std::uint64_t cb=1ULL<<c, d1=1ULL<<(row-c+n-1), d2=1ULL<<(row+c);
        if ((cols&cb)||(diag1&d1)||(diag2&d2)) continue;
        pos[row]=c; dfs(n,row+1,cols|cb,diag1|d1,diag2|d2,pos,out);
    }
}
std::vector<std::vector<std::string>> solve(int n) {
    if (n < 0 || n > 20) return {};
    std::vector<std::vector<std::string>> out; std::vector<int> pos(n);
    dfs(n,0,0,0,0,pos,out); return out;
}
}  // namespace optimal
