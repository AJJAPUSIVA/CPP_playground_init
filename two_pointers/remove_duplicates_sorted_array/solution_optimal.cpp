#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<int>&a){if(a.empty())return{};std::vector<int>o;o.reserve(a.size());o.push_back(a[0]);for(int i=1;i<(int)a.size();++i)if(a[i]!=a[i-1])o.push_back(a[i]);return o;}
}  // namespace optimal
