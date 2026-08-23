#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<playground::Interval>&s,const std::vector<int>&q){std::vector<int>o;for(int t:q){int c=0;for(auto x:s)c+=x.start<=t&&t<x.end;o.push_back(c);}return o;}
}  // namespace brute_force
