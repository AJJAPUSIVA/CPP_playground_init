#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<int>> solve(const std::vector<std::vector<int>>&g){std::vector<std::vector<int>>copy(g.size());for(std::size_t i=0;i<g.size();++i)for(int v:g[i])copy[i].push_back(v);return copy;}
}  // namespace brute_force
