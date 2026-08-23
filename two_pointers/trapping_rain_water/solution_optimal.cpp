#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&h){int l=0,r=h.size()-1,lm=0,rm=0;long long ans=0;while(l<=r){if(lm<=rm){lm=std::max(lm,h[l]);ans+=lm-h[l++];}else{rm=std::max(rm,h[r]);ans+=rm-h[r--];}}return ans;}
}  // namespace optimal
