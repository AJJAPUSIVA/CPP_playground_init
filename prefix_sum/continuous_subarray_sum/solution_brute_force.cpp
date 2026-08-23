#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<int>&a,int k){for(int i=0;i<static_cast<int>(a.size());++i){long long s=0;for(int j=i;j<static_cast<int>(a.size());++j){s+=a[j];if(j-i>=1&&(k?s%k==0:s==0))return true;}}return false;}
}  // namespace brute_force
