#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::uint32_t x){int c=0;while(x){x&=x-1;++c;}return c;}
}  // namespace optimal
