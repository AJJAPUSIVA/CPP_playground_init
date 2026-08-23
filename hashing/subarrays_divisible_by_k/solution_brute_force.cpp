#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&a,int k){long long ans=0;for(std::size_t i=0;i<a.size();++i){long long s=0;for(std::size_t j=i;j<a.size();++j){s+=a[j];if(s%k==0)++ans;}}return ans;}
}  // namespace brute_force
