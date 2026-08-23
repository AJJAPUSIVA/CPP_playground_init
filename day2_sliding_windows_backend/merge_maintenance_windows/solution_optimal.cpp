#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<playground::Interval> solve(std::vector<playground::Interval>a){if(a.empty())return{};std::sort(a.begin(),a.end(),[](auto x,auto y){return x.start<y.start||(x.start==y.start&&x.end<y.end);});std::vector<playground::Interval>out{a[0]};for(std::size_t i=1;i<a.size();++i)if(a[i].start<=out.back().end)out.back().end=std::max(out.back().end,a[i].end);else out.push_back(a[i]);return out;}
}  // namespace optimal
