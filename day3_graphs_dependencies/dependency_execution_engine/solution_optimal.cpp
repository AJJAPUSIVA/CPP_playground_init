#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<std::string>> solve(const std::vector<std::string>&tasks,const std::vector<std::pair<std::string,std::string>>&deps){std::map<std::string,std::vector<std::string>>g;std::map<std::string,int>d;for(auto&t:tasks)d[t]=0;for(auto&[x,p]:deps){g[p].push_back(x);++d[x];}std::set<std::string>ready;for(auto&[t,x]:d)if(!x)ready.insert(t);std::vector<std::vector<std::string>>o;int seen=0;while(!ready.empty()){std::vector<std::string>b(ready.begin(),ready.end());ready.clear();o.push_back(b);seen+=b.size();for(auto&u:b)for(auto&v:g[u])if(--d[v]==0)ready.insert(v);}return seen==static_cast<int>(tasks.size())?o:std::vector<std::vector<std::string>>{};}
}  // namespace optimal
