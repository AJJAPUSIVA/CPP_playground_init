#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<playground::Interval>a){int n=a.size(),best=0;for(int mask=0;mask<(1<<n);++mask){std::vector<playground::Interval>v;for(int i=0;i<n;++i)if(mask>>i&1)v.push_back(a[i]);std::sort(v.begin(),v.end(),[](auto x,auto y){return x.start<y.start;});bool ok=true;for(std::size_t i=1;i<v.size();++i)if(v[i].start<v[i-1].end){ok=false;break;}if(ok)best=std::max(best,static_cast<int>(v.size()));}return n-best;}
}  // namespace brute_force
