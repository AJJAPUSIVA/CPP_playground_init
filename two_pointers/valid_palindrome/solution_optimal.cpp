#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::string&s){int l=0,r=s.size()-1;while(l<r){while(l<r&&!std::isalnum((unsigned char)s[l]))++l;while(l<r&&!std::isalnum((unsigned char)s[r]))--r;if(std::tolower((unsigned char)s[l])!=std::tolower((unsigned char)s[r]))return false;++l;--r;}return true;}
}  // namespace optimal
