#include "../../include/playground_types.hpp"

namespace optimal {
struct DSU{std::vector<int>p,r;DSU(int n):p(n),r(n){std::iota(p.begin(),p.end(),0);}int f(int x){return p[x]==x?x:p[x]=f(p[x]);}bool un(int a,int b){a=f(a);b=f(b);if(a==b)return false;if(r[a]<r[b])std::swap(a,b);p[b]=a;if(r[a]==r[b])++r[a];return true;}};
int solve(int n,const std::vector<std::pair<int,int>>&edges){DSU d(n);int c=n;for(auto [a,b]:edges)if(d.un(a,b))--c;return c;}
}  // namespace optimal
