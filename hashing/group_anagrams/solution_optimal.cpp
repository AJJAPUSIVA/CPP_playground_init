#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<std::string>> solve(const std::vector<std::string>&s){std::map<std::array<int,26>,std::vector<std::string>>m;for(auto&w:s){std::array<int,26>k{};for(char c:w)++k[c-'a'];m[k].push_back(w);}std::vector<std::vector<std::string>>out;for(auto&[k,v]:m)out.push_back(v);return out;}
}  // namespace optimal
