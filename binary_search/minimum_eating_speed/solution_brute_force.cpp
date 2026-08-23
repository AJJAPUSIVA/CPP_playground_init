#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& piles,long long h){
    int mx=*std::max_element(piles.begin(),piles.end());
    for(int k=1;k<=mx;++k){long long t=0;for(int p:piles)t+=(p+k-1)/k;if(t<=h)return k;}return mx;
}
}  // namespace brute_force
