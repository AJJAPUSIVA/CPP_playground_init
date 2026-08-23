#include "../../include/playground_types.hpp"

namespace optimal {
void solve(playground::TreeNode*r){while(r){if(r->left){auto*p=r->left;while(p->right)p=p->right;p->right=r->right;r->right=r->left;r->left=nullptr;}r=r->right;}}
}  // namespace optimal
