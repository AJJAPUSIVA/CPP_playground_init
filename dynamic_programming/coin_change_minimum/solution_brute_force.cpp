#include "../../include/playground_types.hpp"

namespace brute_force {
int rec(const std::vector<int>& c,int a){if(a==0)return 0;if(a<0)return 1000000;int best=1000000;for(int x:c)best=std::min(best,1+rec(c,a-x));return best;}
int solve(const std::vector<int>& c,int a){int x=rec(c,a);return x>=1000000?-1:x;}
}  // namespace brute_force
