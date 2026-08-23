#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&a){for(int i=0;i<static_cast<int>(a.size());++i){long long l=0,r=0;for(int j=0;j<i;++j)l+=a[j];for(int j=i+1;j<static_cast<int>(a.size());++j)r+=a[j];if(l==r)return i;}return-1;}
}  // namespace brute_force
