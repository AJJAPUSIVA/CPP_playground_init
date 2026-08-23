#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(int n, int open, int close, std::string& cur, std::vector<std::string>& out) {
    if (static_cast<int>(cur.size()) == 2 * n) { out.push_back(cur); return; }
    if (open < n) { cur.push_back('('); dfs(n, open + 1, close, cur, out); cur.pop_back(); }
    if (close < open) { cur.push_back(')'); dfs(n, open, close + 1, cur, out); cur.pop_back(); }
}
std::vector<std::string> solve(int n) {
    std::vector<std::string> out; std::string cur; dfs(n,0,0,cur,out); return out;
}
}  // namespace optimal
