#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::vector<int>& c,int i,int a){if(a==0)return 1;if(a<0||i==static_cast<int>(c.size()))return 0;return rec(c,i,a-c[i])+rec(c,i+1,a);}
long long solve(const std::vector<int>& c,int a){return rec(c,0,a);}
}  // namespace brute_force
