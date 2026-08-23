#include "../../include/playground_types.hpp"

namespace optimal {
std::map<std::string,double> solve(const std::vector<std::pair<std::string,double>>&a){std::map<std::string,std::pair<double,int>>m;for(auto&[k,v]:a){m[k].first+=v;++m[k].second;}std::map<std::string,double>o;for(auto&[k,p]:m)o[k]=p.first/p.second;return o;}
}  // namespace optimal
