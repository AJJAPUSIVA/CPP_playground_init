#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a){int x=0;for(int v:a)x^=v;return x;}
}  // namespace optimal
