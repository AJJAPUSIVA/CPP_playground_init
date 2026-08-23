#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string&s,int k){
    std::array<int,256>f{};int l=0,best=0,mx=0;
    for(int r=0;r<(int)s.size();++r){mx=std::max(mx,++f[(unsigned char)s[r]]);while(r-l+1-mx>k)--f[(unsigned char)s[l++]];best=std::max(best,r-l+1);}return best;
}
}  // namespace optimal
