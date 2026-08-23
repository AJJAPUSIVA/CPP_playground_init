#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::string&a,const std::string&b){if(a.size()!=b.size())return false;for(std::size_t i=0;i<a.size();++i)for(std::size_t j=0;j<a.size();++j)if((a[i]==a[j])!=(b[i]==b[j]))return false;return true;}
}  // namespace brute_force
