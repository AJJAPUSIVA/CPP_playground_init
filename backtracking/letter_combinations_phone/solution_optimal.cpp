#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(const std::string& digits, std::size_t i, std::string& cur,
         std::vector<std::string>& out) {
    static const std::vector<std::string> m{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if (i == digits.size()) { out.push_back(cur); return; }
    for (char c : m[digits[i]-'0']) {
        cur.push_back(c); dfs(digits, i+1, cur, out); cur.pop_back();
    }
}
std::vector<std::string> solve(const std::string& digits) {
    if (digits.empty()) return {};
    std::vector<std::string> out; std::string cur; dfs(digits,0,cur,out); return out;
}
}  // namespace optimal
