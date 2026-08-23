#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a,int target){int l=0,best=INT_MAX;long long s=0;for(int r=0;r<(int)a.size();++r){s+=a[r];while(s>=target){best=std::min(best,r-l+1);s-=a[l++];}}return best==INT_MAX?0:best;}
}  // namespace optimal
