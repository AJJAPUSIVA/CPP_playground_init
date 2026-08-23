#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(int a,int b){std::array<int,2>v{a,b};return std::accumulate(v.begin(),v.end(),0);}
}  // namespace brute_force
