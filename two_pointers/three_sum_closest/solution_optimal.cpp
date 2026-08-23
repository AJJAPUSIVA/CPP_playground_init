#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<int>a,int target){std::sort(a.begin(),a.end());long long best=LLONG_MAX;int ans=0;for(int i=0;i<(int)a.size()-2;++i){int l=i+1,r=a.size()-1;while(l<r){int s=a[i]+a[l]+a[r],d=std::abs(s-target);if(d<best){best=d;ans=s;}if(s<target)++l;else if(s>target)--r;else return target;}}return ans;}
}  // namespace optimal
