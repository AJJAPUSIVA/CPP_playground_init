#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<std::vector<int>>&m,int target){for(auto&r:m)for(int x:r)if(x==target)return true;return false;}
}  // namespace brute_force
