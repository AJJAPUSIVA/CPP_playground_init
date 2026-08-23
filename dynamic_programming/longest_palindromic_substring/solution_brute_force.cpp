#include "../../include/playground_types.hpp"

namespace brute_force {
bool pal(const std::string&s,int l,int r){while(l<r)if(s[l++]!=s[r--])return false;return true;}
std::string solve(const std::string&s){std::string best;for(int i=0;i<static_cast<int>(s.size());++i)for(int j=i;j<static_cast<int>(s.size());++j)if(j-i+1>static_cast<int>(best.size())&&pal(s,i,j))best=s.substr(i,j-i+1);return best;}
}  // namespace brute_force
