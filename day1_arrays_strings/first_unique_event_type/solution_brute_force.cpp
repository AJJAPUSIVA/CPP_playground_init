#include "../../include/playground_types.hpp"

namespace brute_force {
std::optional<std::string> solve(const std::vector<std::string>&a){for(auto&s:a)if(std::count(a.begin(),a.end(),s)==1)return s;return std::nullopt;}
}  // namespace brute_force
