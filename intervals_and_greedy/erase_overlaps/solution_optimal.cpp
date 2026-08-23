#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<playground::Interval>a){std::sort(a.begin(),a.end(),[](auto x,auto y){return x.end<y.end;});int removed=0,end=std::numeric_limits<int>::min();for(auto x:a)if(x.start>=end)end=x.end;else ++removed;return removed;}
}  // namespace optimal
