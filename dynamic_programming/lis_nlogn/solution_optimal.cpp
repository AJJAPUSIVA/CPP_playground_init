#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){std::vector<int>tails;for(int x:a){auto it=std::lower_bound(tails.begin(),tails.end(),x);if(it==tails.end())tails.push_back(x);else *it=x;}return tails.size();}
}  // namespace optimal
