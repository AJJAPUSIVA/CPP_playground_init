#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<bool> solve(const std::vector<std::pair<std::string,long long>>&r,int maxReq,long long w){std::map<std::pair<std::string,long long>,int>c;std::vector<bool>o;for(auto&[k,t]:r){auto key=std::make_pair(k,t/w);bool ok=c[key]<maxReq;if(ok)++c[key];o.push_back(ok);}return o;}
}  // namespace brute_force
