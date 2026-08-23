#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<int>> solve(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> out;
    do { out.push_back(nums); } while (std::next_permutation(nums.begin(), nums.end()));
    return out;
}
}  // namespace brute_force
