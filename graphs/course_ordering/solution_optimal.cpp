#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(int n,const std::vector<std::pair<int,int>>&p){std::vector<std::vector<int>>g(n);std::vector<int>d(n);for(auto [c,pre]:p){g[pre].push_back(c);++d[c];}std::priority_queue<int,std::vector<int>,std::greater<int>>q;for(int i=0;i<n;++i)if(!d[i])q.push(i);std::vector<int>out;while(!q.empty()){int u=q.top();q.pop();out.push_back(u);for(int v:g[u])if(--d[v]==0)q.push(v);}return out.size()==static_cast<std::size_t>(n)?out:std::vector<int>{};}
}  // namespace optimal
