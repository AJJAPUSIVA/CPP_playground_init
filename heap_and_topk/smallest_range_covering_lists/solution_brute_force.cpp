#include "../../include/playground_types.hpp"

namespace brute_force {
std::pair<int,int> solve(const std::vector<std::vector<int>>&lists){
    std::vector<int> all; for(auto&v:lists) all.insert(all.end(),v.begin(),v.end());
    if(all.empty()) return {0,0};
    int bestL=0,bestR=0,bestW=std::numeric_limits<int>::max();
    for(int l:all) for(int r:all) if(l<=r){
        bool ok=true; for(auto&v:lists){bool hit=false;for(int x:v)if(l<=x&&x<=r){hit=true;break;}if(!hit){ok=false;break;}}
        if(ok && (r-l<bestW || (r-l==bestW&&l<bestL))){bestW=r-l;bestL=l;bestR=r;}
    }
    return {bestL,bestR};
}
}  // namespace brute_force
