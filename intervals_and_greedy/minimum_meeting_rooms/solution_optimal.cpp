#include "../../include/playground_types.hpp"

namespace optimal {
int solve(std::vector<playground::Interval>a){std::vector<int>s,e;for(auto x:a){s.push_back(x.start);e.push_back(x.end);}std::sort(s.begin(),s.end());std::sort(e.begin(),e.end());int i=0,j=0,cur=0,best=0;while(i<static_cast<int>(s.size())){if(s[i]<e[j]){best=std::max(best,++cur);++i;}else{--cur;++j;}}return best;}
}  // namespace optimal
