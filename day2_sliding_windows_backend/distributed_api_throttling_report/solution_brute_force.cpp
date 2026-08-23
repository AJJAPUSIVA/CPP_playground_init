#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<bool> solve(const std::vector<std::pair<std::string,long long>>&r,int maxReq,long long window){std::map<std::string,std::vector<long long>>h;std::vector<bool>o;for(auto&[k,t]:r){auto&v=h[k];std::vector<long long>active;for(auto x:v)if(x>t-window)active.push_back(x);bool ok=static_cast<int>(active.size())<maxReq;if(ok)active.push_back(t);v.swap(active);o.push_back(ok);}return o;}
}  // namespace brute_force
