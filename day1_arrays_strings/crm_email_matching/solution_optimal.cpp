#include "../../include/playground_types.hpp"

namespace optimal {
std::pair<std::vector<std::string>,std::vector<std::string>> solve(const std::vector<std::string>&a,const std::vector<std::string>&b){std::set<std::string>A(a.begin(),a.end()),B(b.begin(),b.end());std::vector<std::string>x,y;std::set_difference(A.begin(),A.end(),B.begin(),B.end(),std::back_inserter(x));std::set_difference(B.begin(),B.end(),A.begin(),A.end(),std::back_inserter(y));return{x,y};}
}  // namespace optimal
