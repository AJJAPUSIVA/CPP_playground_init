#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<long long> solve(const std::vector<int>&a,const std::vector<std::pair<int,int>>&q){std::vector<long long>o;for(auto[l,r]:q)o.push_back(std::accumulate(a.begin()+l,a.begin()+r+1,0LL));return o;}
}  // namespace brute_force
