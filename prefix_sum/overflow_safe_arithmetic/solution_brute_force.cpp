#include "../../include/playground_types.hpp"

namespace brute_force {
std::optional<long long> solve(long long a,long long b){long double s=static_cast<long double>(a)+static_cast<long double>(b);if(s>std::numeric_limits<long long>::max()||s<std::numeric_limits<long long>::min())return std::nullopt;return a+b;}
}  // namespace brute_force
