#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&r){int n=r.size();if(!n)return 0;std::vector<int>c(n,1);for(int i=1;i<n;++i)if(r[i]>r[i-1])c[i]=c[i-1]+1;for(int i=n-2;i>=0;--i)if(r[i]>r[i+1])c[i]=std::max(c[i],c[i+1]+1);return std::accumulate(c.begin(),c.end(),0);}
}  // namespace optimal
