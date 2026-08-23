#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<int>&jobs,int cap,int workers){if(cap<=0)return jobs.empty();long long used=0;for(long long x:jobs)used+=(x+cap-1)/cap;return used<=workers;}
}  // namespace optimal
