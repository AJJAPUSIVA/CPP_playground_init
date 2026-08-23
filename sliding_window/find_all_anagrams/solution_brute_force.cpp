#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::string&s,const std::string&p){std::vector<int>o;std::string q=p;std::sort(q.begin(),q.end());for(int i=0;i+(int)p.size()<=(int)s.size();++i){auto x=s.substr(i,p.size());std::sort(x.begin(),x.end());if(x==q)o.push_back(i);}return o;}
}  // namespace brute_force
