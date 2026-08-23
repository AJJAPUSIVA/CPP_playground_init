#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<long long> solve(const std::vector<std::vector<int>>&g,const std::vector<std::array<int,4>>&q){std::vector<long long>o;for(auto z:q){long long s=0;for(int r=z[0];r<=z[2];++r)for(int c=z[1];c<=z[3];++c)s+=g[r][c];o.push_back(s);}return o;}
}  // namespace brute_force
