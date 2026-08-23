#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::string&s){
    std::vector<char> st;for(char c:s){if(c=='('||c=='['||c=='{')st.push_back(c);else{if(st.empty())return false;char o=st.back();st.pop_back();if((c==')'&&o!='(')||(c==']'&&o!='[')||(c=='}'&&o!='{'))return false;}}return st.empty();
}
}  // namespace optimal
