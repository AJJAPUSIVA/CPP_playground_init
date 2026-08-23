#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<int>&a){std::vector<int>o(a.size(),-1),st;for(int i=0;i<(int)a.size();++i){while(!st.empty()&&a[i]>a[st.back()]){o[st.back()]=a[i];st.pop_back();}st.push_back(i);}return o;}
}  // namespace optimal
