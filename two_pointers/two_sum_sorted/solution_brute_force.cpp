#include "../../include/playground_types.hpp"

namespace brute_force {
std::pair<int,int> solve(const std::vector<int>&a,int target){for(int i=0;i<(int)a.size();++i)for(int j=i+1;j<(int)a.size();++j)if(a[i]+a[j]==target)return{i,j};return{-1,-1};}
}  // namespace brute_force
