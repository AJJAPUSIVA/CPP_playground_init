#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<playground::Interval> solve(std::vector<playground::Interval>a,playground::Interval x){a.push_back(x);std::sort(a.begin(),a.end(),[](auto p,auto q){return p.start<q.start;});std::vector<playground::Interval>o;for(auto y:a){if(o.empty()||y.start>o.back().end)o.push_back(y);else o.back().end=std::max(o.back().end,y.end);}return o;}
}  // namespace brute_force
