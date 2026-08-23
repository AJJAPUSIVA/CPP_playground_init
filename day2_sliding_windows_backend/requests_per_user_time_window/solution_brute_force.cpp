#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<long long>&t,long long w){std::vector<int>o;for(std::size_t i=0;i<t.size();++i){int c=0;for(std::size_t j=0;j<=i;++j)c+=t[j]>t[i]-w;o.push_back(c);}return o;}
}  // namespace brute_force
