#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a){for(int x:a)if(std::count(a.begin(),a.end(),x)==1)return x;return 0;}
}  // namespace brute_force
