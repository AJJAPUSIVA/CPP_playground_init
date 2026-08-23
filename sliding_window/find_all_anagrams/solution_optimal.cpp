#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::string&s,const std::string&p){if(p.size()>s.size())return{};std::array<int,256>need{},win{};for(char c:p)++need[(unsigned char)c];std::vector<int>o;for(int i=0;i<(int)s.size();++i){++win[(unsigned char)s[i]];if(i>=(int)p.size())--win[(unsigned char)s[i-p.size()]];if(i+1>=(int)p.size()&&win==need)o.push_back(i+1-p.size());}return o;}
}  // namespace optimal
