#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<long long> solve(int n,const std::vector<playground::Edge>&e,int s){const long long INF=1LL<<60;std::vector<long long>d(n,INF);d[s]=0;for(int it=0;it<n-1;++it){bool ch=false;for(auto x:e)if(d[x.from]!=INF&&d[x.to]>d[x.from]+x.weight){d[x.to]=d[x.from]+x.weight;ch=true;}if(!ch)break;}return d;}
}  // namespace brute_force
