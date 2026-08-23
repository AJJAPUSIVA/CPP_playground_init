#include "../../include/playground_types.hpp"

namespace optimal {
void ser(playground::TreeNode*r,std::ostringstream&os){if(!r){os<<"#, ";return;}os<<"^"<<r->val<<", ";ser(r->left,os);ser(r->right,os);}bool solve(playground::TreeNode*r,playground::TreeNode*s){std::ostringstream a,b;ser(r,a);ser(s,b);return a.str().find(b.str())!=std::string::npos;}
}  // namespace optimal
