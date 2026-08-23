#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::vector<int>&a,int i,int end){if(i>end)return 0;return std::max(rec(a,i+1,end),a[i]+rec(a,i+2,end));}
long long solve(const std::vector<int>&a){if(a.empty())return 0;if(a.size()==1)return a[0];return std::max(rec(a,0,a.size()-2),rec(a,1,a.size()-1));}
}  // namespace brute_force
