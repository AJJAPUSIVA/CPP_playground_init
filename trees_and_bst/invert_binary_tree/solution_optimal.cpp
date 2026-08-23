#include "../../include/playground_types.hpp"

namespace optimal {
playground::TreeNode* solve(playground::TreeNode*r){if(!r)return r;std::queue<playground::TreeNode*>q;q.push(r);while(!q.empty()){auto*x=q.front();q.pop();std::swap(x->left,x->right);if(x->left)q.push(x->left);if(x->right)q.push(x->right);}return r;}
}  // namespace optimal
