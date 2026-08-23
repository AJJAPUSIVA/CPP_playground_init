#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(const std::vector<int>& nums, std::size_t i,
         std::vector<int>& cur, std::vector<std::vector<int>>& out) {
    if (i == nums.size()) { out.push_back(cur); return; }
    dfs(nums, i + 1, cur, out);
    cur.push_back(nums[i]);
    dfs(nums, i + 1, cur, out);
    cur.pop_back();
}
std::vector<std::vector<int>> solve(const std::vector<int>& nums) {
    std::vector<std::vector<int>> out, dummy;
    std::vector<int> cur;
    dfs(nums, 0, cur, out);
    return out;
}
}  // namespace optimal
