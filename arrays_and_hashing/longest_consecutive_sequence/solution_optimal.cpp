#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& nums){
    std::unordered_set<int> s(nums.begin(),nums.end());
    int best=0;
    for(int x:s) if(!s.count(x-1)){
        int y=x;
        while(s.count(y)) ++y;
        best=std::max(best,y-x);
    }
    return best;
}
}  // namespace optimal
