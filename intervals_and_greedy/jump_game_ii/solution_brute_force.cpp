#include "../../include/playground_types.hpp"

namespace brute_force {
int rec(const std::vector<int>&a,int i){if(i>=static_cast<int>(a.size())-1)return 0;int best=1000000;for(int j=1;j<=a[i];++j)best=std::min(best,1+rec(a,i+j));return best;}int solve(const std::vector<int>&a){return a.size()<2?0:rec(a,0);}
}  // namespace brute_force
