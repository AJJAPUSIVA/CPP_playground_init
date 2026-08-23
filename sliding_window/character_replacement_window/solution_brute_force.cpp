#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::string&s,int k){
    int best=0;for(int i=0;i<(int)s.size();++i){std::array<int,256>f{};int mx=0;for(int j=i;j<(int)s.size();++j){mx=std::max(mx,++f[(unsigned char)s[j]]);if(j-i+1-mx<=k)best=std::max(best,j-i+1);}}return best;
}
}  // namespace brute_force
