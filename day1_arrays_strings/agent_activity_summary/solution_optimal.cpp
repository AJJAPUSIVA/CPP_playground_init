#include "../../include/playground_types.hpp"

namespace optimal {
std::map<std::string,int> solve(const std::vector<std::string>&a){std::map<std::string,int>m;for(auto&s:a)++m[s];return m;}
}  // namespace optimal
