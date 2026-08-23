#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a,int k){int l=0,z=0,best=0;for(int r=0;r<(int)a.size();++r){z+=a[r]==0;while(z>k)z-=a[l++]==0;best=std::max(best,r-l+1);}return best;}
}  // namespace optimal
