#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a,int target){int best=INT_MAX;for(int i=0;i<(int)a.size();++i){int s=0;for(int j=i;j<(int)a.size();++j){s+=a[j];if(s>=target){best=std::min(best,j-i+1);break;}}}return best==INT_MAX?0:best;}
}  // namespace brute_force
