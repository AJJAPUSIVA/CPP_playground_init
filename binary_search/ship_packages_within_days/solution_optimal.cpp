#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>& w,int days){
    int l=*std::max_element(w.begin(),w.end()),r=std::accumulate(w.begin(),w.end(),0);
    while(l<r){int cap=l+(r-l)/2,d=1,load=0;for(int x:w){if(load+x>cap){++d;load=0;}load+=x;}if(d<=days)r=cap;else l=cap+1;}return l;
}
}  // namespace optimal
