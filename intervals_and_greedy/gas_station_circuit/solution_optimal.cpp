#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&gas,const std::vector<int>&cost){long long total=0,tank=0;int start=0;for(int i=0;i<static_cast<int>(gas.size());++i){int d=gas[i]-cost[i];total+=d;tank+=d;if(tank<0){tank=0;start=i+1;}}return total>=0?start:-1;}
}  // namespace optimal
