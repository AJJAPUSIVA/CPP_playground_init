#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&h){long long ans=0;for(int i=0;i<(int)h.size();++i){int l=0,r=0;for(int j=0;j<=i;++j)l=std::max(l,h[j]);for(int j=i;j<(int)h.size();++j)r=std::max(r,h[j]);ans+=std::min(l,r)-h[i];}return ans;}
}  // namespace brute_force
