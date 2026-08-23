#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){int n=a.size();if(!n)return 0;std::vector<int>inc(n,1),dec(n,1);for(int i=0;i<n;++i)for(int j=0;j<i;++j)if(a[j]<a[i])inc[i]=std::max(inc[i],inc[j]+1);for(int i=n-1;i>=0;--i)for(int j=n-1;j>i;--j)if(a[j]<a[i])dec[i]=std::max(dec[i],dec[j]+1);int best=0;for(int i=0;i<n;++i)best=std::max(best,inc[i]+dec[i]-1);return best;}
}  // namespace optimal
