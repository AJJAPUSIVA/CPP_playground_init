#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<int>&a){if(a.empty())return 0;long long best=std::numeric_limits<long long>::lowest();for(std::size_t i=0;i<a.size();++i){long long p=1;for(std::size_t j=i;j<a.size();++j){p*=a[j];best=std::max(best,p);}}return best;}
}  // namespace brute_force
