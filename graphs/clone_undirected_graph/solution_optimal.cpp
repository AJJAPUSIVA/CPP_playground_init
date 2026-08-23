#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<int>> solve(const std::vector<std::vector<int>>&g){if(g.empty())return{};std::vector<std::vector<int>>copy(g.size());std::vector<char>seen(g.size());std::queue<int>q;q.push(0);seen[0]=1;while(!q.empty()){int u=q.front();q.pop();copy[u]=g[u];for(int v:g[u])if(!seen[v]){seen[v]=1;q.push(v);}}for(std::size_t i=0;i<g.size();++i)if(!seen[i])copy[i]=g[i];return copy;}
}  // namespace optimal
