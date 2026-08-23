#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<std::pair<std::string,std::string>>&e,const std::string&s,const std::string&t){std::set<std::string>cur{s};for(std::size_t round=0;round<=e.size();++round){if(cur.count(t))return true;auto next=cur;for(auto&[a,b]:e)if(cur.count(a))next.insert(b);if(next==cur)break;cur.swap(next);}return cur.count(t);}
}  // namespace brute_force
