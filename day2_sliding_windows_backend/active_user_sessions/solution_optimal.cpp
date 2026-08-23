#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<playground::Interval>&s,const std::vector<int>&q){std::vector<int>starts,ends;for(auto x:s){starts.push_back(x.start);ends.push_back(x.end);}std::sort(starts.begin(),starts.end());std::sort(ends.begin(),ends.end());std::vector<int>o;for(int t:q){int a=std::upper_bound(starts.begin(),starts.end(),t)-starts.begin();int b=std::upper_bound(ends.begin(),ends.end(),t)-ends.begin();o.push_back(a-b);}return o;}
}  // namespace optimal
