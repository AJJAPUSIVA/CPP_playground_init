#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<std::string>> solve(const std::vector<std::string>&tasks,const std::vector<std::pair<std::string,std::string>>&deps){std::set<std::string>done;std::vector<std::vector<std::string>>o;while(done.size()<tasks.size()){std::vector<std::string>b;for(auto&t:tasks)if(!done.count(t)){bool ok=true;for(auto&[x,p]:deps)if(x==t&&!done.count(p))ok=false;if(ok)b.push_back(t);}if(b.empty())return{};std::sort(b.begin(),b.end());for(auto&t:b)done.insert(t);o.push_back(b);}return o;}
}  // namespace brute_force
