#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>&a){std::vector<int>o(a.size(),-1);for(int i=0;i<(int)a.size();++i)for(int j=i+1;j<(int)a.size();++j)if(a[j]>a[i]){o[i]=a[j];break;}return o;}
}  // namespace brute_force
