#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){if(a.size()<2)return 0;int jumps=0,end=0,far=0;for(int i=0;i<static_cast<int>(a.size())-1;++i){far=std::max(far,i+a[i]);if(i==end){++jumps;end=far;}}return jumps;}
}  // namespace optimal
