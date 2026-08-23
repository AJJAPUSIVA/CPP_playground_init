#include "../../include/playground_types.hpp"

namespace brute_force {
std::pair<std::vector<std::string>,std::vector<std::string>> solve(const std::vector<std::string>&a,const std::vector<std::string>&b){std::vector<std::string>x,y;for(auto&s:a)if(std::find(b.begin(),b.end(),s)==b.end())x.push_back(s);for(auto&s:b)if(std::find(a.begin(),a.end(),s)==a.end())y.push_back(s);std::sort(x.begin(),x.end());std::sort(y.begin(),y.end());return{x,y};}
}  // namespace brute_force
