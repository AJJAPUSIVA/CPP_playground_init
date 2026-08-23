#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::string&s){
    std::string t=s;bool changed=true;while(changed){changed=false;for(auto p:{std::string("()"),std::string("[]"),std::string("{}")}){auto pos=t.find(p);if(pos!=std::string::npos){t.erase(pos,2);changed=true;}}}return t.empty();
}
}  // namespace brute_force
