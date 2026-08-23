#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<playground::Event> solve(const std::vector<playground::Event>&e){std::map<std::string,playground::Event>m;for(auto&x:e)if(!m.count(x.id)||x.timestamp<m[x.id].timestamp)m[x.id]=x;std::vector<playground::Event>o;for(auto&[k,v]:m)o.push_back(v);return o;}
}  // namespace optimal
