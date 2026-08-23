#include "../../include/playground_types.hpp"

namespace optimal {
std::map<std::string,double> solve(const std::vector<playground::Transaction>&t){std::map<std::string,double>m;for(auto&x:t)m[x.account_id]+=x.amount;return m;}
}  // namespace optimal
