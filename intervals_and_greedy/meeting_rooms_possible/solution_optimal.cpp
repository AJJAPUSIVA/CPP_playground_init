#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(std::vector<playground::Interval>a){std::sort(a.begin(),a.end(),[](auto x,auto y){return x.start<y.start;});for(std::size_t i=1;i<a.size();++i)if(a[i].start<a[i-1].end)return false;return true;}
}  // namespace optimal
