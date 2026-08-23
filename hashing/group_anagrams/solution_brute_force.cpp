#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<std::string>> solve(const std::vector<std::string>&s){std::vector<std::vector<std::string>>out;std::vector<char>used(s.size());for(std::size_t i=0;i<s.size();++i)if(!used[i]){std::string a=s[i];std::sort(a.begin(),a.end());out.push_back({s[i]});used[i]=1;for(std::size_t j=i+1;j<s.size();++j)if(!used[j]){std::string b=s[j];std::sort(b.begin(),b.end());if(a==b){used[j]=1;out.back().push_back(s[j]);}}}return out;}
}  // namespace brute_force
