#include "../../include/playground_types.hpp"

namespace optimal {
std::optional<std::string> solve(const std::vector<std::string>&a){std::unordered_map<std::string,int>c;for(auto&s:a)++c[s];for(auto&s:a)if(c[s]==1)return s;return std::nullopt;}
}  // namespace optimal
