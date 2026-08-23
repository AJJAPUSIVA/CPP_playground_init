#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::vector<int>& w,int days){
    int lo=*std::max_element(w.begin(),w.end()),hi=std::accumulate(w.begin(),w.end(),0);
    for(int cap=lo;cap<=hi;++cap){int d=1,load=0;for(int x:w){if(load+x>cap){++d;load=0;}load+=x;}if(d<=days)return cap;}return hi;
}
}  // namespace brute_force
