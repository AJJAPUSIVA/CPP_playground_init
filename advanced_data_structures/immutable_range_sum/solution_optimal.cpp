#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<long long> solve(const std::vector<int>&a,const std::vector<std::pair<int,int>>&q){std::vector<long long>p(a.size()+1);for(std::size_t i=0;i<a.size();++i)p[i+1]=p[i]+a[i];std::vector<long long>o;for(auto[l,r]:q)o.push_back(p[r+1]-p[l]);return o;}
}  // namespace optimal
