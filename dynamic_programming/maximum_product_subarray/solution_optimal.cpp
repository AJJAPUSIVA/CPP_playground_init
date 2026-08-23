#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&a){if(a.empty())return 0;long long hi=a[0],lo=a[0],best=a[0];for(std::size_t i=1;i<a.size();++i){long long x=a[i];if(x<0)std::swap(hi,lo);hi=std::max(x,hi*x);lo=std::min(x,lo*x);best=std::max(best,hi);}return best;}
}  // namespace optimal
