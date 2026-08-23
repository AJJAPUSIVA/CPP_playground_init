#include "../../include/playground_types.hpp"

namespace brute_force {
playground::TreeNode* solve(playground::TreeNode*r){if(!r)return r;auto*l=solve(r->left);auto*rr=solve(r->right);r->left=rr;r->right=l;return r;}
}  // namespace brute_force
