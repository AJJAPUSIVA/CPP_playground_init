#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& piles,long long h){
    int l=1,r=*std::max_element(piles.begin(),piles.end());
    while(l<r){int m=l+(r-l)/2;long long t=0;for(int p:piles)t+=(p+m-1)/m;if(t<=h)r=m;else l=m+1;}return l;
}
}  // namespace optimal
