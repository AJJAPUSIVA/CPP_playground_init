#include "../../include/playground_types.hpp"

namespace brute_force {
bool valid(const std::string& s) {
    int bal = 0;
    for (char c : s) { bal += c == '(' ? 1 : -1; if (bal < 0) return false; }
    return bal == 0;
}
void rec(int left, std::string& s, std::vector<std::string>& out) {
    if (left == 0) { if (valid(s)) out.push_back(s); return; }
    s.push_back('('); rec(left - 1, s, out); s.back() = ')'; rec(left - 1, s, out); s.pop_back();
}
std::vector<std::string> solve(int n) {
    std::vector<std::string> out; std::string s;
    rec(2 * n, s, out); return out;
}
}  // namespace brute_force
