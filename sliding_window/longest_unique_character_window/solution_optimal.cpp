#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string& s){
    std::array<int,256> last;last.fill(-1);int left=0,best=0;
    for(int r=0;r<(int)s.size();++r){left=std::max(left,last[(unsigned char)s[r]]+1);last[(unsigned char)s[r]]=r;best=std::max(best,r-left+1);}return best;
}
}  // namespace optimal
