#include "../../include/playground_types.hpp"

namespace brute_force {
bool same(playground::TreeNode*a,playground::TreeNode*b){if(!a||!b)return a==b;return a->val==b->val&&same(a->left,b->left)&&same(a->right,b->right);}bool solve(playground::TreeNode*r,playground::TreeNode*s){if(!s)return true;if(!r)return false;return same(r,s)||solve(r->left,s)||solve(r->right,s);}
}  // namespace brute_force
