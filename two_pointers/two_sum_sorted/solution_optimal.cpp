#include "../../include/playground_types.hpp"

namespace optimal {
std::pair<int,int> solve(const std::vector<int>&a,int target){int l=0,r=a.size()-1;while(l<r){long long s=a[l]+a[r];if(s==target)return{l,r};if(s<target)++l;else --r;}return{-1,-1};}
}  // namespace optimal
