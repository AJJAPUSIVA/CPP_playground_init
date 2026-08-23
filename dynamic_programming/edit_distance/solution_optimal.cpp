#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string&a,const std::string&b){std::vector<int> prev(b.size()+1),cur(b.size()+1);std::iota(prev.begin(),prev.end(),0);for(std::size_t i=1;i<=a.size();++i){cur[0]=i;for(std::size_t j=1;j<=b.size();++j)cur[j]=a[i-1]==b[j-1]?prev[j-1]:1+std::min({prev[j],cur[j-1],prev[j-1]});prev.swap(cur);}return prev[b.size()];}
}  // namespace optimal
