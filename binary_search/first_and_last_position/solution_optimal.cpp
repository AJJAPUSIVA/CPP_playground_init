#include "../../include/playground_types.hpp"

namespace optimal {
std::pair<int,int> solve(const std::vector<int>& nums,int target){
    auto lb=std::lower_bound(nums.begin(),nums.end(),target);
    if(lb==nums.end()||*lb!=target)return {-1,-1};
    auto ub=std::upper_bound(lb,nums.end(),target);
    return {int(lb-nums.begin()),int(ub-nums.begin()-1)};
}
}  // namespace optimal
