#include "../../include/playground_types.hpp"

namespace brute_force {
std::map<std::string,double> solve(const std::vector<playground::Transaction>&t){std::vector<std::pair<std::string,double>>v;for(auto&x:t){auto it=std::find_if(v.begin(),v.end(),[&](auto&p){return p.first==x.account_id;});if(it==v.end())v.push_back({x.account_id,x.amount});else it->second+=x.amount;}return {v.begin(),v.end()};}
}  // namespace brute_force
