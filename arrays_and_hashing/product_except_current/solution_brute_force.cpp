#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<long long> solve(const std::vector<int>& nums) {
    std::vector<long long> out(nums.size(),1);
    for (std::size_t i=0;i<nums.size();++i)
        for (std::size_t j=0;j<nums.size();++j)
            if (i!=j) out[i]*=nums[j];
    return out;
}
}  // namespace brute_force
