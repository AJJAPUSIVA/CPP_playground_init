#include "../../include/playground_types.hpp"

namespace brute_force {
std::pair<int,int> solve(const std::vector<int>& nums,int target){
    int first=-1,last=-1; for(int i=0;i<(int)nums.size();++i)if(nums[i]==target){if(first<0)first=i;last=i;} return {first,last};
}
}  // namespace brute_force
