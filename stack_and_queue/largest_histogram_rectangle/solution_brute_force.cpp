#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&h){long long best=0;for(int i=0;i<(int)h.size();++i){int mn=INT_MAX;for(int j=i;j<(int)h.size();++j){mn=std::min(mn,h[j]);best=std::max(best,1LL*mn*(j-i+1));}}return best;}
}  // namespace brute_force
