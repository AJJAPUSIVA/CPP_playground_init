#include "../../include/playground_types.hpp"

namespace optimal {
std::string solve(const std::string&s,const std::string&t){
    if(t.empty())return"";std::array<int,256>need{},have{};int required=0;for(char c:t){if(need[(unsigned char)c]++==0)++required;}
    int formed=0,l=0,bestLen=INT_MAX,bestL=0;
    for(int r=0;r<(int)s.size();++r){unsigned char c=s[r];if(++have[c]==need[c]&&need[c])++formed;
        while(formed==required){if(r-l+1<bestLen){bestLen=r-l+1;bestL=l;}unsigned char d=s[l++];if(have[d]--==need[d]&&need[d])--formed;}}
    return bestLen==INT_MAX?"":s.substr(bestL,bestLen);
}
}  // namespace optimal
