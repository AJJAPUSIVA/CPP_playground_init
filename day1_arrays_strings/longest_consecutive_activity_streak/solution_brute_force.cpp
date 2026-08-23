#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<int> nums){
    if(nums.empty()) return 0;
    std::sort(nums.begin(),nums.end());
    int best=1,cur=1;
    for(std::size_t i=1;i<nums.size();++i){
        if(nums[i]==nums[i-1]) continue;
        if(nums[i]==nums[i-1]+1) ++cur; else cur=1;
        best=std::max(best,cur);
    }
    return best;
}
}  // namespace brute_force
