#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&h){long long b=0;for(int i=0;i<(int)h.size();++i)for(int j=i+1;j<(int)h.size();++j)b=std::max(b,1LL*(j-i)*std::min(h[i],h[j]));return b;}
}  // namespace brute_force
