#include "../../include/playground_types.hpp"

namespace optimal {
std::uint32_t solve(std::uint32_t x){std::uint32_t r=0;for(int i=0;i<32;++i){r=(r<<1)|(x&1U);x>>=1;}return r;}
}  // namespace optimal
