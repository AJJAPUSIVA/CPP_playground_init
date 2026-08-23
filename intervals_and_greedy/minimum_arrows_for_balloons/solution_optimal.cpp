#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<playground::Interval>a){if(a.empty())return 0;std::sort(a.begin(),a.end(),[](auto x,auto y){return x.end<y.end;});int arrows=1,pos=a[0].end;for(auto x:a)if(x.start>pos){++arrows;pos=x.end;}return arrows;}
}  // namespace optimal
