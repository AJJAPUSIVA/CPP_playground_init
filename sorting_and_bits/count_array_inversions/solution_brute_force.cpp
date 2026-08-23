#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&a){long long c=0;for(std::size_t i=0;i<a.size();++i)for(std::size_t j=i+1;j<a.size();++j)c+=a[i]>a[j];return c;}
}  // namespace brute_force
