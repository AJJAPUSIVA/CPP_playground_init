#include "../../include/playground_types.hpp"

namespace brute_force {
std::string solve(const std::string&s,const std::string&t){
    if(t.empty())return"";std::array<int,256>need{};for(char c:t)++need[(unsigned char)c];
    for(int len=t.size();len<=(int)s.size();++len)for(int i=0;i+len<=(int)s.size();++i){auto have=std::array<int,256>{};for(int j=i;j<i+len;++j)++have[(unsigned char)s[j]];bool ok=true;for(int c=0;c<256;++c)if(have[c]<need[c]){ok=false;break;}if(ok)return s.substr(i,len);}return"";
}
}  // namespace brute_force
