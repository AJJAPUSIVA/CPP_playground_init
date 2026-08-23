#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<int>&a,int k){std::unordered_map<int,int>c;for(int x:a)++c[x];std::vector<std::vector<int>>b(a.size()+1);for(auto[x,n]:c)b[n].push_back(x);std::vector<int>o;for(int f=a.size();f>=1&&static_cast<int>(o.size())<k;--f)for(int x:b[f])if(static_cast<int>(o.size())<k)o.push_back(x);return o;}
}  // namespace optimal
