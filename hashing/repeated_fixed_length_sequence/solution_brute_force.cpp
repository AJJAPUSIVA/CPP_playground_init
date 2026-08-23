#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::string> solve(const std::string&s,int k){std::set<std::string>out;for(int i=0;i+k<=static_cast<int>(s.size());++i)for(int j=i+k;j+k<=static_cast<int>(s.size());++j)if(s.compare(i,k,s,j,k)==0)out.insert(s.substr(i,k));return {out.begin(),out.end()};}
}  // namespace brute_force
