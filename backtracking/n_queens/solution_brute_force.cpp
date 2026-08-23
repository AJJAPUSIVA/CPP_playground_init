#include "../../include/playground_types.hpp"

namespace brute_force {
bool safe(const std::vector<int>& cols, int row, int col) {
    for (int r = 0; r < row; ++r)
        if (cols[r] == col || std::abs(cols[r]-col) == row-r) return false;
    return true;
}
void rec(int n, int row, std::vector<int>& cols, std::vector<std::vector<std::string>>& out) {
    if (row == n) {
        std::vector<std::string> board(n, std::string(n,'.'));
        for (int r=0;r<n;++r) board[r][cols[r]]='Q';
        out.push_back(board); return;
    }
    for (int c=0;c<n;++c) if (safe(cols,row,c)) { cols[row]=c; rec(n,row+1,cols,out); }
}
std::vector<std::vector<std::string>> solve(int n) {
    std::vector<std::vector<std::string>> out; std::vector<int> cols(n,-1); rec(n,0,cols,out); return out;
}
}  // namespace brute_force
