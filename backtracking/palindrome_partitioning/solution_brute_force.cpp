#include "../../include/playground_types.hpp"

namespace brute_force {
bool pal(const std::string& s, int l, int r) {
    while (l < r) if (s[l++] != s[r--]) return false;
    return true;
}
void dfs(const std::string& s, int start, std::vector<std::string>& cur,
         std::vector<std::vector<std::string>>& out) {
    if (start == static_cast<int>(s.size())) { out.push_back(cur); return; }
    for (int end=start;end<static_cast<int>(s.size());++end) if (pal(s,start,end)) {
        cur.push_back(s.substr(start,end-start+1)); dfs(s,end+1,cur,out); cur.pop_back();
    }
}
std::vector<std::vector<std::string>> solve(const std::string& s) {
    std::vector<std::vector<std::string>> out; std::vector<std::string> cur; dfs(s,0,cur,out); return out;
}
}  // namespace brute_force
