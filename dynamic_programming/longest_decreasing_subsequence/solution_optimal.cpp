#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){std::vector<int>tails;for(int x:a){long long y=-static_cast<long long>(x);auto it=std::lower_bound(tails.begin(),tails.end(),y);if(it==tails.end())tails.push_back(y);else *it=y;}return tails.size();}
}  // namespace optimal
