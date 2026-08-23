#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&a,int t){std::unordered_map<int,long long>dp{{0,1}};for(int x:a){std::unordered_map<int,long long>n;for(auto [s,c]:dp){n[s+x]+=c;n[s-x]+=c;}dp.swap(n);}return dp[t];}
}  // namespace optimal
