#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::string> solve(const std::vector<std::pair<std::string,std::string>>&e,const std::string&s){std::map<std::string,std::vector<std::string>>g;for(auto&[a,b]:e)g[a].push_back(b);std::set<std::string>seen;std::queue<std::string>q;q.push(s);seen.insert(s);while(!q.empty()){auto u=q.front();q.pop();for(auto&v:g[u])if(seen.insert(v).second)q.push(v);}seen.erase(s);return {seen.begin(),seen.end()};}
}  // namespace optimal
