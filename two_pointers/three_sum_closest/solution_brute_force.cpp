#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a,int target){long long best=LLONG_MAX;int ans=0;for(int i=0;i<(int)a.size();++i)for(int j=i+1;j<(int)a.size();++j)for(int k=j+1;k<(int)a.size();++k){int s=a[i]+a[j]+a[k];if(std::llabs(1LL*s-target)<best){best=std::llabs(1LL*s-target);ans=s;}}return ans;}
}  // namespace brute_force
