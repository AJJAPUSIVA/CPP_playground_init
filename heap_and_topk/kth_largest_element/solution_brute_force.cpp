#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<int>a,int k){std::sort(a.begin(),a.end(),std::greater<int>());return a[k-1];}
}  // namespace brute_force
