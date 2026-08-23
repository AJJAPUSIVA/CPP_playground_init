#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::string> solve(const std::string& digits) {
    if (digits.empty()) return {};
    const std::vector<std::string> m{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    std::vector<std::string> out{""};
    for (char d : digits) {
        std::vector<std::string> next;
        for (const auto& prefix : out)
            for (char c : m[d-'0']) next.push_back(prefix + c);
        out.swap(next);
    }
    return out;
}
}  // namespace brute_force
