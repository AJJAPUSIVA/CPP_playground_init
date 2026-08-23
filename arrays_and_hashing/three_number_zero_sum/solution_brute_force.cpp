#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<int>> solve(const std::vector<int>& nums){
    std::set<std::vector<int>> s;
    for(std::size_t i=0;i<nums.size();++i)
        for(std::size_t j=i+1;j<nums.size();++j)
            for(std::size_t k=j+1;k<nums.size();++k)
                if(nums[i]+nums[j]+nums[k]==0){ std::vector<int> t{nums[i],nums[j],nums[k]}; std::sort(t.begin(),t.end()); s.insert(t); }
    return {s.begin(),s.end()};
}
}  // namespace brute_force
