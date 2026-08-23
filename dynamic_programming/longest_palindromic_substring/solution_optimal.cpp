#include "../../include/playground_types.hpp"

namespace optimal {
std::string solve(const std::string&s){if(s.empty())return"";int bl=0,br=0;auto expand=[&](int l,int r){while(l>=0&&r<static_cast<int>(s.size())&&s[l]==s[r]){if(r-l>br-bl){bl=l;br=r;}--l;++r;}};for(int i=0;i<static_cast<int>(s.size());++i){expand(i,i);expand(i,i+1);}return s.substr(bl,br-bl+1);}
}  // namespace optimal
