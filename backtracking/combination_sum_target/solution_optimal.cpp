#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(const std::vector<int>& a, std::size_t start, int target,
         std::vector<int>& cur, std::vector<std::vector<int>>& out) {
    if (target == 0) { out.push_back(cur); return; }
    for (std::size_t i = start; i < a.size(); ++i) {
        if (a[i] > target) break;
        cur.push_back(a[i]);
        dfs(a, i, target - a[i], cur, out);
        cur.pop_back();
    }
}
std::vector<std::vector<int>> solve(std::vector<int> a, int target) {
    std::sort(a.begin(), a.end());
    std::vector<std::vector<int>> out; std::vector<int> cur;
    dfs(a, 0, target, cur, out);
    return out;
}
}  // namespace optimal
