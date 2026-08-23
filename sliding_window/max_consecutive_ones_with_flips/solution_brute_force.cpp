#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a,int k){int best=0;for(int i=0;i<(int)a.size();++i){int z=0;for(int j=i;j<(int)a.size();++j){z+=a[j]==0;if(z>k)break;best=std::max(best,j-i+1);}}return best;}
}  // namespace brute_force
