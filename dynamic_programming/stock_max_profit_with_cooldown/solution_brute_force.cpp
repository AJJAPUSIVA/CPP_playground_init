#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::vector<int>&p,int i,bool hold){if(i>=static_cast<int>(p.size()))return 0;if(hold)return std::max(rec(p,i+1,true),p[i]+rec(p,i+2,false));return std::max(rec(p,i+1,false),-p[i]+rec(p,i+1,true));}
long long solve(const std::vector<int>&p){return rec(p,0,false);}
}  // namespace brute_force
