#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<std::pair<std::string,std::string>>&e,const std::string&s,const std::string&t){std::map<std::string,std::vector<std::string>>g;for(auto&[a,b]:e)g[a].push_back(b);std::queue<std::pair<std::string,int>>q;q.push({s,0});std::set<std::string>seen{s};while(!q.empty()){auto[u,d]=q.front();q.pop();if(u==t)return d;for(auto&v:g[u])if(seen.insert(v).second)q.push({v,d+1});}return-1;}
}  // namespace optimal
