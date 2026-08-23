#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>&a){std::vector<int>o;for(int x:a)if(std::find(o.begin(),o.end(),x)==o.end())o.push_back(x);return o;}
}  // namespace brute_force
