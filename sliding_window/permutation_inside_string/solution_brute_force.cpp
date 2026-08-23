#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::string&s1,const std::string&s2){std::string p=s1;std::sort(p.begin(),p.end());for(int i=0;i+(int)s1.size()<=(int)s2.size();++i){auto x=s2.substr(i,s1.size());std::sort(x.begin(),x.end());if(x==p)return true;}return false;}
}  // namespace brute_force
