#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::string> solve(std::vector<std::string>tasks,const std::vector<std::pair<std::string,std::string>>&deps){std::sort(tasks.begin(),tasks.end());do{std::map<std::string,int>p;for(int i=0;i<static_cast<int>(tasks.size());++i)p[tasks[i]]=i;bool ok=true;for(auto&[task,pre]:deps)if(p[pre]>p[task]){ok=false;break;}if(ok)return tasks;}while(std::next_permutation(tasks.begin(),tasks.end()));return{};}
}  // namespace brute_force
