#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&r){int n=r.size();if(!n)return 0;std::vector<int>c(n,1);bool ch=true;while(ch){ch=false;for(int i=0;i<n;++i){if(i&&r[i]>r[i-1]&&c[i]<=c[i-1]){c[i]=c[i-1]+1;ch=true;}if(i+1<n&&r[i]>r[i+1]&&c[i]<=c[i+1]){c[i]=c[i+1]+1;ch=true;}}}return std::accumulate(c.begin(),c.end(),0);}
}  // namespace brute_force
