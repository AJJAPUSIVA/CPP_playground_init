#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<long long> solve(const std::vector<int>& nums) {
    std::vector<long long> out(nums.size(),1);
    long long prefix=1;
    for (std::size_t i=0;i<nums.size();++i) { out[i]=prefix; prefix*=nums[i]; }
    long long suffix=1;
    for (std::size_t i=nums.size(); i-- > 0;) { out[i]*=suffix; suffix*=nums[i]; }
    return out;
}
}  // namespace optimal
