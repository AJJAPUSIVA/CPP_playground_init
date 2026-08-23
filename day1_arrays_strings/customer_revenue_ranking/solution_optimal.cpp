#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::string> solve(const std::vector<playground::Transaction>&t){std::unordered_map<std::string,double>m;for(auto&x:t)m[x.account_id]+=x.amount;std::vector<std::pair<std::string,double>>v(m.begin(),m.end());std::sort(v.begin(),v.end(),[](auto&a,auto&b){return a.second!=b.second?a.second>b.second:a.first<b.first;});std::vector<std::string>o;for(auto&p:v)o.push_back(p.first);return o;}
}  // namespace optimal
