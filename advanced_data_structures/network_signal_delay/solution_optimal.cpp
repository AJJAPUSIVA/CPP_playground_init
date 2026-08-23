#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<long long> solve(int n,const std::vector<playground::Edge>&e,int s){const long long INF=1LL<<60;std::vector<std::vector<std::pair<int,int>>>g(n);for(auto x:e)g[x.from].push_back({x.to,x.weight});std::vector<long long>d(n,INF);d[s]=0;using P=std::pair<long long,int>;std::priority_queue<P,std::vector<P>,std::greater<P>>q;q.push({0,s});while(!q.empty()){auto[du,u]=q.top();q.pop();if(du!=d[u])continue;for(auto[v,w]:g[u])if(d[v]>du+w){d[v]=du+w;q.push({d[v],v});}}return d;}
}  // namespace optimal
