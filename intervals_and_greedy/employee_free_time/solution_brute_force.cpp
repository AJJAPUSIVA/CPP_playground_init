#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<playground::Interval> solve(const std::vector<std::vector<playground::Interval>>&s){
    std::vector<playground::Interval>a;for(auto&v:s)a.insert(a.end(),v.begin(),v.end());if(a.empty())return{};
    std::sort(a.begin(),a.end(),[](auto x,auto y){return x.start<y.start;});std::vector<playground::Interval>m;
    for(auto x:a){if(m.empty()||x.start>m.back().end)m.push_back(x);else m.back().end=std::max(m.back().end,x.end);}
    std::vector<playground::Interval>o;for(std::size_t i=1;i<m.size();++i)o.push_back({m[i-1].end,m[i].start});return o;
}
}  // namespace brute_force
