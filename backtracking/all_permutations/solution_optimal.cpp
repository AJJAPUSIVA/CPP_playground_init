#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(const std::vector<int>& nums, std::vector<bool>& used,
         std::vector<int>& cur, std::vector<std::vector<int>>& out) {
    if (cur.size() == nums.size()) { out.push_back(cur); return; }
    for (std::size_t i = 0; i < nums.size(); ++i) {
        if (used[i]) continue;
        used[i] = true; cur.push_back(nums[i]);
        dfs(nums, used, cur, out);
        cur.pop_back(); used[i] = false;
    }
}
std::vector<std::vector<int>> solve(const std::vector<int>& nums) {
    std::vector<std::vector<int>> out;
    std::vector<int> cur;
    std::vector<bool> used(nums.size());
    dfs(nums, used, cur, out);
    return out;
}
}  // namespace optimal
