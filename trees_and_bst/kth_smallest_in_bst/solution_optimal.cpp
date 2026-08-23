#include "../../include/playground_types.hpp"

namespace optimal {
int solve(playground::TreeNode*r,int k){std::stack<playground::TreeNode*>s;while(r||!s.empty()){while(r){s.push(r);r=r->left;}r=s.top();s.pop();if(--k==0)return r->val;r=r->right;}throw std::out_of_range("k");}
}  // namespace optimal
