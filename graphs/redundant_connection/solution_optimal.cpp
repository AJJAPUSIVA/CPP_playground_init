#include "../../include/playground_types.hpp"

namespace optimal {
struct DSU{std::vector<int>p;DSU(int n):p(n){std::iota(p.begin(),p.end(),0);}int f(int x){return p[x]==x?x:p[x]=f(p[x]);}bool un(int a,int b){a=f(a);b=f(b);if(a==b)return false;p[b]=a;return true;}};
std::pair<int,int> solve(const std::vector<std::pair<int,int>>&e){int n=0;for(auto [a,b]:e)n=std::max({n,a,b});DSU d(n+1);for(auto [a,b]:e)if(!d.un(a,b))return{a,b};return{-1,-1};}
}  // namespace optimal
