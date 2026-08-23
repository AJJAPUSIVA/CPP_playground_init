#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::string> solve(const std::string&s,int k){if(k<=0)return{};std::unordered_map<std::string,int>cnt;std::set<std::string>out;for(int i=0;i+k<=static_cast<int>(s.size());++i){auto sub=s.substr(i,k);if(++cnt[sub]==2)out.insert(sub);}return {out.begin(),out.end()};}
}  // namespace optimal
