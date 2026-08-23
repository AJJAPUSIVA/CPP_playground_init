#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>&gas,const std::vector<int>&cost){for(int s=0;s<static_cast<int>(gas.size());++s){long long tank=0;bool ok=true;for(int k=0;k<static_cast<int>(gas.size());++k){int i=(s+k)%gas.size();tank+=gas[i]-cost[i];if(tank<0){ok=false;break;}}if(ok)return s;}return-1;}
}  // namespace brute_force
