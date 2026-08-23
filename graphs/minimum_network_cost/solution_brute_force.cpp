#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(int n,std::vector<playground::Edge>e){if(n==0)return 0;long long best=1LL<<60;int m=e.size();if(m>20)return -1;for(int mask=0;mask<(1<<m);++mask)if(__builtin_popcount(static_cast<unsigned>(mask))==n-1){std::vector<int>p(n);std::iota(p.begin(),p.end(),0);auto f=[&](auto&&self,int x)->int{return p[x]==x?x:p[x]=self(self,p[x]);};bool ok=true;long long cost=0;for(int i=0;i<m;++i)if(mask>>i&1){int a=f(f,e[i].from),b=f(f,e[i].to);if(a==b){ok=false;break;}p[b]=a;cost+=e[i].weight;}if(ok)best=std::min(best,cost);}return best==(1LL<<60)?-1:best;}
}  // namespace brute_force
