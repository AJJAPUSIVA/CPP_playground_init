#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::vector<int>&a,int i,int sum,int target){if(i==static_cast<int>(a.size()))return sum==target;return rec(a,i+1,sum+a[i],target)+rec(a,i+1,sum-a[i],target);}
long long solve(const std::vector<int>&a,int t){return rec(a,0,0,t);}
}  // namespace brute_force
