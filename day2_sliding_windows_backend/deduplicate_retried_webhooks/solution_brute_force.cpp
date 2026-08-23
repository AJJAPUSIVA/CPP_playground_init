#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<playground::Event> solve(const std::vector<playground::Event>&e){std::vector<playground::Event>o;for(auto&x:e){auto it=std::find_if(o.begin(),o.end(),[&](auto&y){return y.id==x.id;});if(it==o.end())o.push_back(x);else if(x.timestamp<it->timestamp)*it=x;}return o;}
}  // namespace brute_force
