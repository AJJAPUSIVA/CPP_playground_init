#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){long long total=std::accumulate(a.begin(),a.end(),0LL),left=0;for(int i=0;i<static_cast<int>(a.size());++i){if(left==total-left-a[i])return i;left+=a[i];}return-1;}
}  // namespace optimal
