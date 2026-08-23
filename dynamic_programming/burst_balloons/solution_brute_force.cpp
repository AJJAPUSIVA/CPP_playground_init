#include "../../include/playground_types.hpp"

namespace brute_force {
int rec(std::vector<int>a){if(a.empty())return 0;int best=0;for(int i=0;i<static_cast<int>(a.size());++i){int left=i? a[i-1]:1,right=i+1<static_cast<int>(a.size())?a[i+1]:1;auto b=a;b.erase(b.begin()+i);best=std::max(best,left*a[i]*right+rec(b));}return best;}
int solve(const std::vector<int>&a){return rec(a);}
}  // namespace brute_force
