#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){int x=a.size();for(int i=0;i<static_cast<int>(a.size());++i)x^=i^a[i];return x;}
}  // namespace optimal
