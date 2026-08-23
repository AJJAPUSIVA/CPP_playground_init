#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<char>tasks,int n){std::map<char,int>c;for(char x:tasks)++c[x];int time=0,last=-1;std::map<char,int>ready;while(!c.empty()){char pick=0;int best=-1;for(auto [x,k]:c)if((!ready.count(x)||ready[x]<=time)&&k>best){best=k;pick=x;}if(best<0){++time;continue;}if(--c[pick]==0)c.erase(pick);ready[pick]=time+n+1;++time;}return time;}
}  // namespace brute_force
