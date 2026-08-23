#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<playground::Interval> solve(std::vector<playground::Interval>a){bool changed=true;while(changed){changed=false;for(std::size_t i=0;i<a.size()&&!changed;++i)for(std::size_t j=i+1;j<a.size();++j)if(std::max(a[i].start,a[j].start)<=std::min(a[i].end,a[j].end)){a[i]={std::min(a[i].start,a[j].start),std::max(a[i].end,a[j].end)};a.erase(a.begin()+j);changed=true;break;}}std::sort(a.begin(),a.end(),[](auto x,auto y){return x.start<y.start;});return a;}
}  // namespace brute_force
