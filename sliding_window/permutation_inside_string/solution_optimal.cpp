#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::string&s1,const std::string&s2){if(s1.size()>s2.size())return false;std::array<int,256>a{},b{};for(char c:s1)++a[(unsigned char)c];for(int i=0;i<(int)s2.size();++i){++b[(unsigned char)s2[i]];if(i>=(int)s1.size())--b[(unsigned char)s2[i-s1.size()]];if(i+1>=(int)s1.size()&&a==b)return true;}return false;}
}  // namespace optimal
