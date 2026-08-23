#include "../../include/playground_types.hpp"

namespace brute_force {
void rec(const std::vector<int>& a, int target, std::vector<int>& cur,
         std::vector<std::vector<int>>& out) {
    if (target == 0) { auto x = cur; std::sort(x.begin(), x.end()); out.push_back(x); return; }
    if (target < 0) return;
    for (int x : a) {
        cur.push_back(x); rec(a, target - x, cur, out); cur.pop_back();
    }
}
std::vector<std::vector<int>> solve(const std::vector<int>& a, int target) {
    std::vector<std::vector<int>> raw; std::vector<int> cur;
    rec(a, target, cur, raw);
    std::sort(raw.begin(), raw.end());
    raw.erase(std::unique(raw.begin(), raw.end()), raw.end());
    return raw;
}
}  // namespace brute_force
