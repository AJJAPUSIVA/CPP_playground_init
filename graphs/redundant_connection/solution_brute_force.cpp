#include "../../include/playground_types.hpp"

namespace brute_force {
bool path(int u,int t,const std::vector<std::vector<int>>&g,std::vector<char>&s){if(u==t)return true;s[u]=1;for(int v:g[u])if(!s[v]&&path(v,t,g,s))return true;return false;}
std::pair<int,int> solve(const std::vector<std::pair<int,int>>&e){int n=0;for(auto [a,b]:e)n=std::max({n,a,b});std::vector<std::vector<int>>g(n+1);for(auto [a,b]:e){std::vector<char>s(n+1);if(path(a,b,g,s))return{a,b};g[a].push_back(b);g[b].push_back(a);}return{-1,-1};}
}  // namespace brute_force
