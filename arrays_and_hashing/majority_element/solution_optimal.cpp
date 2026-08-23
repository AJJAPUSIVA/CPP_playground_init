#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& nums){
    int candidate=0,count=0;
    for(int x:nums){ if(count==0) candidate=x; count += (x==candidate?1:-1); }
    return candidate;
}
}  // namespace optimal
