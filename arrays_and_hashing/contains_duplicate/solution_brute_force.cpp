#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<int>& nums){
    for(std::size_t i=0;i<nums.size();++i)
        for(std::size_t j=i+1;j<nums.size();++j)
            if(nums[i]==nums[j]) return true;
    return false;
}
}  // namespace brute_force
