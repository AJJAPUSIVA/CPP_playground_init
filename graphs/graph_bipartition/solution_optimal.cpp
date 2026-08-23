#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<std::vector<int>>&g){std::vector<int>c(g.size());for(int s=0;s<static_cast<int>(g.size());++s)if(!c[s]){std::queue<int>q;q.push(s);c[s]=1;while(!q.empty()){int u=q.front();q.pop();for(int v:g[u]){if(!c[v]){c[v]=-c[u];q.push(v);}else if(c[v]==c[u])return false;}}}return true;}
}  // namespace optimal
