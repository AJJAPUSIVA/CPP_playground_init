#include "../../include/playground_types.hpp"

namespace optimal {
struct DSU{std::vector<int>p,r;DSU(int n):p(n),r(n){std::iota(p.begin(),p.end(),0);}int f(int x){return p[x]==x?x:p[x]=f(p[x]);}bool un(int a,int b){a=f(a);b=f(b);if(a==b)return false;if(r[a]<r[b])std::swap(a,b);p[b]=a;if(r[a]==r[b])++r[a];return true;}};
long long solve(int n,std::vector<playground::Edge>e){if(n==0)return 0;std::sort(e.begin(),e.end(),[](auto&a,auto&b){return a.weight<b.weight;});DSU d(n);long long cost=0;int used=0;for(auto x:e)if(d.un(x.from,x.to)){cost+=x.weight;if(++used==n-1)break;}return used==n-1?cost:-1;}
}  // namespace optimal
