#include "../../include/playground_types.hpp"

namespace optimal {
int solve(playground::TreeNode*r,int a,int b){while(r){if(a<r->val&&b<r->val)r=r->left;else if(a>r->val&&b>r->val)r=r->right;else return r->val;}throw std::runtime_error("not found");}
}  // namespace optimal
