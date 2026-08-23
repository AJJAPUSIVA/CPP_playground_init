#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(long long x){long long l=0,r=x,ans=0;while(l<=r){long long m=l+(r-l)/2;if(m==0||m<=x/m){ans=m;l=m+1;}else r=m-1;}return ans;}
}  // namespace optimal
