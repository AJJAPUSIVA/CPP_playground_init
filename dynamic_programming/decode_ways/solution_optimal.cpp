#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string&s){if(s.empty())return 0;int next=1,next2=0;for(int i=static_cast<int>(s.size())-1;i>=0;--i){int cur=0;if(s[i]!='0'){cur=next;if(i+1<static_cast<int>(s.size())&&((s[i]-'0')*10+s[i+1]-'0')<=26)cur+=next2;}next2=next;next=cur;}return next;}
}  // namespace optimal
