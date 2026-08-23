#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& nums) {
    int slow=nums[0], fast=nums[0];
    do { slow=nums[slow]; fast=nums[nums[fast]]; } while(slow!=fast);
    slow=nums[0];
    while(slow!=fast){ slow=nums[slow]; fast=nums[fast]; }
    return slow;
}
}  // namespace optimal
