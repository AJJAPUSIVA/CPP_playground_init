#include "../../include/playground_types.hpp"

namespace optimal {
std::pair<int,int> solve(const std::vector<std::vector<int>>&lists){
    using T=std::tuple<int,int,int>;
    std::priority_queue<T,std::vector<T>,std::greater<T>>q;
    int currentMax=std::numeric_limits<int>::min();
    for(int i=0;i<static_cast<int>(lists.size());++i){if(lists[i].empty())return{0,0};q.push({lists[i][0],i,0});currentMax=std::max(currentMax,lists[i][0]);}
    int bestL=std::get<0>(q.top()),bestR=currentMax;
    while(true){auto[val,i,j]=q.top();q.pop();if(currentMax-val<bestR-bestL){bestL=val;bestR=currentMax;}if(j+1==static_cast<int>(lists[i].size()))break;int nv=lists[i][j+1];currentMax=std::max(currentMax,nv);q.push({nv,i,j+1});}
    return {bestL,bestR};
}
}  // namespace optimal
