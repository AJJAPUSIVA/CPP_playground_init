#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>&t){std::vector<int>o(t.size());for(int i=0;i<(int)t.size();++i)for(int j=i+1;j<(int)t.size();++j)if(t[j]>t[i]){o[i]=j-i;break;}return o;}
}  // namespace brute_force
