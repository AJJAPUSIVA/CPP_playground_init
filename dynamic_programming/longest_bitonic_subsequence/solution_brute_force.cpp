#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a){int n=a.size();if(!n)return 0;int best=0;for(int peak=0;peak<n;++peak){std::vector<int>L(peak+1,1),R(n-peak,1);for(int i=0;i<=peak;++i)for(int j=0;j<i;++j)if(a[j]<a[i])L[i]=std::max(L[i],L[j]+1);for(int i=n-1;i>=peak;--i)for(int j=n-1;j>i;--j)if(a[j]<a[i])R[i-peak]=std::max(R[i-peak],R[j-peak]+1);best=std::max(best,L[peak]+R[0]-1);}return best;}
}  // namespace brute_force
