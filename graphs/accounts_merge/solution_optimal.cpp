#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<std::string>> solve(const std::vector<std::vector<std::string>>&a){std::unordered_map<std::string,std::string>parent,name;std::function<std::string(const std::string&)>f=[&](const std::string&x)->std::string{auto it=parent.find(x);if(it==parent.end()){parent[x]=x;return x;}if(it->second==x)return x;return it->second=f(it->second);};for(auto&acc:a){for(std::size_t i=1;i<acc.size();++i){parent.emplace(acc[i],acc[i]);name[acc[i]]=acc[0];}for(std::size_t i=2;i<acc.size();++i)parent[f(acc[i])]=f(acc[1]);}std::map<std::string,std::vector<std::string>>g;for(auto&[e,p]:parent)g[f(e)].push_back(e);std::vector<std::vector<std::string>>o;for(auto&[r,v]:g){std::sort(v.begin(),v.end());std::vector<std::string>x{name[r]};x.insert(x.end(),v.begin(),v.end());o.push_back(x);}return o;}
}  // namespace optimal
