#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<playground::Interval>&a){for(std::size_t i=0;i<a.size();++i)for(std::size_t j=i+1;j<a.size();++j)if(std::max(a[i].start,a[j].start)<std::min(a[i].end,a[j].end))return false;return true;}
}  // namespace brute_force
