#include "../../include/playground_types.hpp"

namespace brute_force {
bool rec(const std::vector<int>&a,int i,int t){if(t==0)return true;if(i==static_cast<int>(a.size())||t<0)return false;return rec(a,i+1,t)||rec(a,i+1,t-a[i]);}
bool solve(const std::vector<int>&a){int s=std::accumulate(a.begin(),a.end(),0);return !(s&1)&&rec(a,0,s/2);}
}  // namespace brute_force
