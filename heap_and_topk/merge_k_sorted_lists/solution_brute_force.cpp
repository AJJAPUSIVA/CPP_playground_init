#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<std::vector<int>>&lists){std::vector<int>out;for(auto&v:lists)out.insert(out.end(),v.begin(),v.end());std::sort(out.begin(),out.end());return out;}
}  // namespace brute_force
