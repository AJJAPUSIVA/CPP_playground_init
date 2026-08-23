#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::string> solve(const std::vector<std::string>&tasks,const std::vector<std::pair<std::string,std::string>>&deps){std::map<std::string,std::vector<std::string>>g;std::map<std::string,int>d;for(auto&t:tasks)d[t]=0;for(auto&[task,pre]:deps){g[pre].push_back(task);++d[task];}std::priority_queue<std::string,std::vector<std::string>,std::greater<std::string>>q;for(auto&[t,x]:d)if(!x)q.push(t);std::vector<std::string>o;while(!q.empty()){auto u=q.top();q.pop();o.push_back(u);for(auto&v:g[u])if(--d[v]==0)q.push(v);}return o.size()==tasks.size()?o:std::vector<std::string>{};}
}  // namespace optimal
