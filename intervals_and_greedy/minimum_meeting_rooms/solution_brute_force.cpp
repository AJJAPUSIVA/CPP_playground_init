#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<playground::Interval>&a){int best=0;for(auto x:a){for(int t=x.start;t<x.end;++t){int c=0;for(auto y:a)if(y.start<=t&&t<y.end)++c;best=std::max(best,c);}}return best;}
}  // namespace brute_force
