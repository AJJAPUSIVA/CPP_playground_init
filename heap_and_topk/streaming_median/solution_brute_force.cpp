#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<double> solve(const std::vector<int>&a){std::vector<int>v;std::vector<double>out;for(int x:a){v.push_back(x);std::sort(v.begin(),v.end());int n=v.size();out.push_back(n&1?v[n/2]:(v[n/2-1]+v[n/2])/2.0);}return out;}
}  // namespace brute_force
