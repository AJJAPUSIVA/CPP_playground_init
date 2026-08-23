#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::uint32_t x){int c=0;for(int i=0;i<32;++i)c+=(x>>i)&1U;return c;}
}  // namespace brute_force
