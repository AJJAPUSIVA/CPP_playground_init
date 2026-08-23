#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(playground::TreeNode*r,long long t){if(!r)return false;std::stack<std::pair<playground::TreeNode*,long long>>s;s.push({r,r->val});while(!s.empty()){auto[x,sum]=s.top();s.pop();if(!x->left&&!x->right&&sum==t)return true;if(x->left)s.push({x->left,sum+x->left->val});if(x->right)s.push({x->right,sum+x->right->val});}return false;}
}  // namespace optimal
