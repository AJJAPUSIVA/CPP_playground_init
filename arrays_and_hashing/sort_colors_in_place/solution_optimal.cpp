#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(std::vector<int> nums){
    int low=0,mid=0,high=static_cast<int>(nums.size())-1;
    while(mid<=high){
        if(nums[mid]==0) std::swap(nums[low++],nums[mid++]);
        else if(nums[mid]==1) ++mid;
        else std::swap(nums[mid],nums[high--]);
    }
    return nums;
}
}  // namespace optimal
