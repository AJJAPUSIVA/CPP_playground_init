#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<playground::Point> solve(std::vector<playground::Point>p,int k){std::sort(p.begin(),p.end(),[](auto a,auto b){long long da=1LL*a.x*a.x+1LL*a.y*a.y,db=1LL*b.x*b.x+1LL*b.y*b.y;return da<db;});p.resize(std::min<int>(k,p.size()));return p;}
}  // namespace brute_force
