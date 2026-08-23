#include "../../include/playground_types.hpp"

namespace brute_force {
bool rec(const std::vector<int>&a,int i){if(i>=static_cast<int>(a.size())-1)return true;for(int j=1;j<=a[i];++j)if(rec(a,i+j))return true;return false;}bool solve(const std::vector<int>&a){return a.empty()||rec(a,0);}
}  // namespace brute_force
