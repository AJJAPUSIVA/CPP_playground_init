#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::string> solve(const std::vector<std::pair<std::string,std::string>>&e,const std::string&s){std::set<std::string>seen{s};bool ch=true;while(ch){ch=false;for(auto&[a,b]:e)if(seen.count(a)&&!seen.count(b)){seen.insert(b);ch=true;}}seen.erase(s);return {seen.begin(),seen.end()};}
}  // namespace brute_force
