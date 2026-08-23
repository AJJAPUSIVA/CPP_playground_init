#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&a,int k){std::vector<long long>freq(k);freq[0]=1;long long s=0,ans=0;for(int x:a){s=(s+x)%k;if(s<0)s+=k;ans+=freq[s]++;}return ans;}
}  // namespace optimal
