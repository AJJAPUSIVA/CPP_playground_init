#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<playground::Interval> solve(const std::vector<playground::Interval>&a,playground::Interval x){std::vector<playground::Interval>o;std::size_t i=0;while(i<a.size()&&a[i].end<x.start)o.push_back(a[i++]);while(i<a.size()&&a[i].start<=x.end){x.start=std::min(x.start,a[i].start);x.end=std::max(x.end,a[i].end);++i;}o.push_back(x);while(i<a.size())o.push_back(a[i++]);return o;}
}  // namespace optimal
