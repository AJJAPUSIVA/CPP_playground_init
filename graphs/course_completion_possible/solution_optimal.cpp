#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(int n,const std::vector<std::pair<int,int>>&p){std::vector<std::vector<int>>g(n);std::vector<int>deg(n);for(auto [c,pre]:p){g[pre].push_back(c);++deg[c];}std::queue<int>q;for(int i=0;i<n;++i)if(!deg[i])q.push(i);int seen=0;while(!q.empty()){int u=q.front();q.pop();++seen;for(int v:g[u])if(--deg[v]==0)q.push(v);}return seen==n;}
}  // namespace optimal
