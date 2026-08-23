#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&a){long long prev2=0,prev1=0;for(int x:a){long long cur=std::max(prev1,prev2+x);prev2=prev1;prev1=cur;}return prev1;}
}  // namespace optimal
