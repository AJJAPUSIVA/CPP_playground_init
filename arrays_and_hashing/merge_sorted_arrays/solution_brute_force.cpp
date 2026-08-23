#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(std::vector<int> a, const std::vector<int>& b) {
    a.insert(a.end(), b.begin(), b.end());
    std::sort(a.begin(), a.end());
    return a;
}
}  // namespace brute_force
