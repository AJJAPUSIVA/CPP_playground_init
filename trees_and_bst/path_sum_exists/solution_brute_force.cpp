#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(playground::TreeNode*r,long long t){if(!r)return false;t-=r->val;if(!r->left&&!r->right)return t==0;return solve(r->left,t)||solve(r->right,t);}
}  // namespace brute_force
