#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&h){int l=0,r=h.size()-1;long long b=0;while(l<r){b=std::max(b,1LL*(r-l)*std::min(h[l],h[r]));if(h[l]<h[r])++l;else --r;}return b;}
}  // namespace optimal
