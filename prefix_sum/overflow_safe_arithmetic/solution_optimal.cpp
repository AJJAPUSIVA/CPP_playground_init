#include "../../include/playground_types.hpp"

namespace optimal {
std::optional<long long> solve(long long a,long long b){if((b>0&&a>std::numeric_limits<long long>::max()-b)||(b<0&&a<std::numeric_limits<long long>::min()-b))return std::nullopt;return a+b;}
}  // namespace optimal
