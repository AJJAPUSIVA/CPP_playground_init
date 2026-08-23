#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&a,const std::vector<int>&b,const std::vector<int>&c,const std::vector<int>&d){long long ans=0;for(int w:a)for(int x:b)for(int y:c)for(int z:d)ans+=w+x+y+z==0;return ans;}
}  // namespace brute_force
