#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::string> solve(const std::vector<playground::Transaction>&t){std::vector<std::pair<std::string,double>>v;for(auto&x:t){auto it=std::find_if(v.begin(),v.end(),[&](auto&p){return p.first==x.account_id;});if(it==v.end())v.push_back({x.account_id,x.amount});else it->second+=x.amount;}std::sort(v.begin(),v.end(),[](auto&a,auto&b){return a.second!=b.second?a.second>b.second:a.first<b.first;});std::vector<std::string>o;for(auto&p:v)o.push_back(p.first);return o;}
}  // namespace brute_force
