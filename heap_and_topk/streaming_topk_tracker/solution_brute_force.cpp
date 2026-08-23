#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>&a,int k){std::map<int,int>c;for(int x:a)++c[x];std::vector<std::pair<int,int>>v;for(auto[x,n]:c)v.push_back({n,x});std::sort(v.begin(),v.end(),std::greater<>());std::vector<int>o;for(int i=0;i<k&&i<static_cast<int>(v.size());++i)o.push_back(v[i].second);return o;}
}  // namespace brute_force
