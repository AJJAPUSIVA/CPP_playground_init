#include "../../include/playground_types.hpp"

namespace brute_force {
long long solve(const std::vector<std::string>&t){
    std::vector<std::string> a=t;while(a.size()>1){for(std::size_t i=0;i<a.size();++i)if(a[i]=="+"||a[i]=="-"||a[i]=="*"||a[i]=="/"){long long x=std::stoll(a[i-2]),y=std::stoll(a[i-1]),z=0;if(a[i]=="+")z=x+y;else if(a[i]=="-")z=x-y;else if(a[i]=="*")z=x*y;else z=x/y;a.erase(a.begin()+i-2,a.begin()+i+1);a.insert(a.begin()+i-2,std::to_string(z));break;}}return std::stoll(a[0]);
}
}  // namespace brute_force
