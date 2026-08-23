#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<std::pair<std::string,std::string>>&e,const std::string&s,const std::string&t){std::map<std::string,std::vector<std::string>>g;for(auto&[a,b]:e)g[a].push_back(b);std::set<std::string>seen{s};std::queue<std::string>q;q.push(s);while(!q.empty()){auto u=q.front();q.pop();if(u==t)return true;for(auto&v:g[u])if(seen.insert(v).second)q.push(v);}return false;}
}  // namespace optimal
