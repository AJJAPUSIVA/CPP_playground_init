#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::string> solve(const std::vector<std::string>&w,int k){std::map<std::string,int>c;for(auto&s:w)++c[s];std::vector<std::pair<std::string,int>>v(c.begin(),c.end());std::sort(v.begin(),v.end(),[](auto&a,auto&b){return a.second!=b.second?a.second>b.second:a.first<b.first;});std::vector<std::string>out;for(int i=0;i<k&&i<static_cast<int>(v.size());++i)out.push_back(v[i].first);return out;}
}  // namespace brute_force
