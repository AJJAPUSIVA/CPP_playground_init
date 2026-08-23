#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<long long> solve(int n,const std::vector<std::tuple<int,int,int>>&u){std::vector<long long>d(n+1);for(auto[l,r,x]:u){d[l]+=x;if(r+1<n)d[r+1]-=x;}for(int i=1;i<n;++i)d[i]+=d[i-1];d.resize(n);return d;}
}  // namespace optimal
