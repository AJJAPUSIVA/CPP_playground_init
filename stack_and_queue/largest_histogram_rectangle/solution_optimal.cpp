#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&h){std::vector<std::pair<int,int>>st;long long best=0;for(int i=0;i<=(int)h.size();++i){int cur=i==(int)h.size()?0:h[i],start=i;while(!st.empty()&&st.back().second>cur){auto [idx,height]=st.back();st.pop_back();best=std::max(best,1LL*height*(i-idx));start=idx;}st.push_back({start,cur});}return best;}
}  // namespace optimal
