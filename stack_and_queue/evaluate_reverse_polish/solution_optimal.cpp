#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<std::string>&t){
    std::vector<long long> st;for(auto&s:t){if(s=="+"||s=="-"||s=="*"||s=="/"){long long b=st.back();st.pop_back();long long a=st.back();st.pop_back();if(s=="+")st.push_back(a+b);else if(s=="-")st.push_back(a-b);else if(s=="*")st.push_back(a*b);else st.push_back(a/b);}else st.push_back(std::stoll(s));}return st.back();
}
}  // namespace optimal
