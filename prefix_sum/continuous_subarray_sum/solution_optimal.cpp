#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<int>&a,int k){std::unordered_map<long long,int>first{{0,-1}};long long s=0;for(int i=0;i<static_cast<int>(a.size());++i){s+=a[i];long long r=k?s%k:s;if(r<0)r+=std::abs(k);if(first.count(r)){if(i-first[r]>=2)return true;}else first[r]=i;}return false;}
}  // namespace optimal
