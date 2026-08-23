#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(std::vector<int>a){for(std::size_t i=0;i<a.size();++i)for(std::size_t j=i+1;j<a.size();++j)if(a[j]<a[i])std::swap(a[i],a[j]);return a;}
}  // namespace brute_force
