#include "../../include/playground_types.hpp"

namespace brute_force {
std::map<std::string,double> solve(const std::vector<std::pair<std::string,double>>&a){std::map<std::string,double>o;std::set<std::string>keys;for(auto&x:a)keys.insert(x.first);for(auto&k:keys){double s=0;int n=0;for(auto&x:a)if(x.first==k){s+=x.second;++n;}o[k]=s/n;}return o;}
}  // namespace brute_force
