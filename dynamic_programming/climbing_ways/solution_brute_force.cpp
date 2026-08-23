#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(int n){if(n<=1)return 1;return rec(n-1)+rec(n-2);}
long long solve(int n){return n<0?0:rec(n);}
}  // namespace brute_force
