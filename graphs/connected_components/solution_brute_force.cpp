#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(int n,const std::vector<std::pair<int,int>>&edges){
    std::vector<std::vector<int>>g(n);for(auto [a,b]:edges){g[a].push_back(b);g[b].push_back(a);}
    std::vector<char>seen(n);int count=0;
    for(int s=0;s<n;++s)if(!seen[s]){++count;std::queue<int>q;q.push(s);seen[s]=1;while(!q.empty()){int u=q.front();q.pop();for(int v:g[u])if(!seen[v]){seen[v]=1;q.push(v);}}}
    return count;
}
}  // namespace brute_force
