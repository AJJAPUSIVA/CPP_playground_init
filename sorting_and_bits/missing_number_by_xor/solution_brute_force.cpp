#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a){for(int x=0;x<=static_cast<int>(a.size());++x)if(std::find(a.begin(),a.end(),x)==a.end())return x;return-1;}
}  // namespace brute_force
