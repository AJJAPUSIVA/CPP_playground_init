#include "../../include/playground_types.hpp"

namespace optimal {
int solve(int a,int b){std::uint32_t x=static_cast<std::uint32_t>(a),y=static_cast<std::uint32_t>(b);while(y){std::uint32_t carry=(x&y)<<1;x^=y;y=carry;}return static_cast<int>(x);}
}  // namespace optimal
