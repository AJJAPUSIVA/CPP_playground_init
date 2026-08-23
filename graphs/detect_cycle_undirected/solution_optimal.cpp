#include "../../include/playground_types.hpp"

namespace optimal {
struct DSU{std::vector<int>p;DSU(int n):p(n){std::iota(p.begin(),p.end(),0);}int f(int x){return p[x]==x?x:p[x]=f(p[x]);}bool un(int a,int b){a=f(a);b=f(b);if(a==b)return false;p[b]=a;return true;}};
bool solve(int n,const std::vector<std::pair<int,int>>&e){DSU d(n);for(auto [a,b]:e)if(!d.un(a,b))return true;return false;}
}  // namespace optimal
