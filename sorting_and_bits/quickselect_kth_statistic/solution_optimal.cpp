#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<int>a,int k){int target=k-1,l=0,r=a.size()-1;while(true){int pivot=a[r],p=l;for(int i=l;i<r;++i)if(a[i]<=pivot)std::swap(a[p++],a[i]);std::swap(a[p],a[r]);if(p==target)return a[p];if(p<target)l=p+1;else r=p-1;}}
}  // namespace optimal
