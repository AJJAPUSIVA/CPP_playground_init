#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::vector<int>&a,int i){if(i>=static_cast<int>(a.size()))return 0;return std::max(rec(a,i+1),a[i]+rec(a,i+2));}
long long solve(const std::vector<int>&a){return rec(a,0);}
}  // namespace brute_force
