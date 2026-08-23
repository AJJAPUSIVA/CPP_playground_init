#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(long long x){long long r=0;while((r+1)<=x/(r+1))++r;return r;}
}  // namespace brute_force
