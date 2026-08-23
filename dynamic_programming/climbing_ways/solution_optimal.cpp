#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(int n){if(n<0)return 0;long long a=1,b=1;for(int i=2;i<=n;++i){long long c=a+b;a=b;b=c;}return b;}
}  // namespace optimal
