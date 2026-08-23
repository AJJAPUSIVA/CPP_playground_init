#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(int n,const std::vector<playground::Edge>&e,int s,int t){std::vector<std::vector<std::pair<int,int>>>g(n);for(auto x:e)g[x.from].push_back({x.to,x.weight});std::vector<long long>d(n,1LL<<60);std::deque<int>q;d[s]=0;q.push_back(s);while(!q.empty()){int u=q.front();q.pop_front();for(auto[v,w]:g[u])if(d[v]>d[u]+w){d[v]=d[u]+w;if(w)q.push_back(v);else q.push_front(v);}}return d[t]==(1LL<<60)?-1:d[t];}
}  // namespace optimal
