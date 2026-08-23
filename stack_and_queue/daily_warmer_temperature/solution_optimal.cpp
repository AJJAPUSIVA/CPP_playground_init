#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<int>&t){std::vector<int>o(t.size()),st;for(int i=0;i<(int)t.size();++i){while(!st.empty()&&t[i]>t[st.back()]){int j=st.back();st.pop_back();o[j]=i-j;}st.push_back(i);}return o;}
}  // namespace optimal
