#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(int n,const std::vector<std::pair<int,int>>&e){std::vector<std::vector<int>>g(n);for(auto[a,b]:e)g[a].push_back(b);for(int s=0;s<n;++s){std::vector<char>seen(n);std::queue<int>q;q.push(s);while(!q.empty()){int u=q.front();q.pop();for(int v:g[u]){if(v==s)return true;if(!seen[v]){seen[v]=1;q.push(v);}}}}return false;}
}  // namespace brute_force
