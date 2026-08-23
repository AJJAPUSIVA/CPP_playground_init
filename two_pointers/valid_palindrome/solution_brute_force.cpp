#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::string&s){std::string t;for(unsigned char c:s)if(std::isalnum(c))t.push_back(std::tolower(c));auto u=t;std::reverse(u.begin(),u.end());return t==u;}
}  // namespace brute_force
