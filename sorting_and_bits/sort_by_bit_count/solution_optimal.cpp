#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(std::vector<int>a){std::sort(a.begin(),a.end(),[](int x,int y){int bx=__builtin_popcount(static_cast<unsigned>(x)),by=__builtin_popcount(static_cast<unsigned>(y));return bx!=by?bx<by:x<y;});return a;}
}  // namespace optimal
