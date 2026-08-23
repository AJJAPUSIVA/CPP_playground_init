#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(std::vector<int> nums) {
    std::size_t write = 0;
    for (int x : nums) if (x != 0) nums[write++] = x;
    while (write < nums.size()) nums[write++] = 0;
    return nums;
}
}  // namespace optimal
