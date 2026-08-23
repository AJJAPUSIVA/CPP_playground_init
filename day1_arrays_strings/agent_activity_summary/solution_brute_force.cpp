#include "../../include/playground_types.hpp"

namespace brute_force {
std::map<std::string,int> solve(const std::vector<std::string>&a){std::map<std::string,int>m;for(auto&s:a){int c=0;for(auto&t:a)c+=s==t;m[s]=c;}return m;}
}  // namespace brute_force
