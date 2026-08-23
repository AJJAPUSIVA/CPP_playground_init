#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<long long> solve(int n,const std::vector<std::tuple<int,int,int>>&u){std::vector<long long>a(n);for(auto[l,r,x]:u)for(int i=l;i<=r;++i)a[i]+=x;return a;}
}  // namespace brute_force
