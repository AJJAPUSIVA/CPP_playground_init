#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<int>a,int k){std::sort(a.begin(),a.end());return a.at(k-1);}
}  // namespace brute_force
