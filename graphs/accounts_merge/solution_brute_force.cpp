#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<std::string>> solve(const std::vector<std::vector<std::string>>&a){int n=a.size();std::vector<std::set<std::string>>emails(n);for(int i=0;i<n;++i)emails[i].insert(a[i].begin()+1,a[i].end());bool ch=true;while(ch){ch=false;for(int i=0;i<n&&!ch;++i)if(!emails[i].empty())for(int j=i+1;j<n;++j)if(!emails[j].empty()){std::vector<std::string>x;std::set_intersection(emails[i].begin(),emails[i].end(),emails[j].begin(),emails[j].end(),std::back_inserter(x));if(!x.empty()){emails[i].insert(emails[j].begin(),emails[j].end());emails[j].clear();ch=true;break;}}}std::vector<std::vector<std::string>>o;for(int i=0;i<n;++i)if(!emails[i].empty()){std::vector<std::string>v{a[i][0]};v.insert(v.end(),emails[i].begin(),emails[i].end());o.push_back(v);}return o;}
}  // namespace brute_force
