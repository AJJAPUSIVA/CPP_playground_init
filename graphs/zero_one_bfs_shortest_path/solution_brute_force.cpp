#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(int n,const std::vector<playground::Edge>&e,int s,int t){auto d=std::vector<long long>(n,1LL<<60);d[s]=0;for(int i=0;i<n-1;++i)for(auto x:e)if(d[x.from]!=(1LL<<60))d[x.to]=std::min(d[x.to],d[x.from]+x.weight);return d[t]==(1LL<<60)?-1:d[t];}
}  // namespace brute_force
