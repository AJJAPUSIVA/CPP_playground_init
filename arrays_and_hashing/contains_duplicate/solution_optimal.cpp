#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<int>& nums){
    std::unordered_set<int> s;
    for(int x:nums) if(!s.insert(x).second) return true;
    return false;
}
}  // namespace optimal
