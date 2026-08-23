#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(playground::TreeNode*root){if(!root)return 0;return 1+std::max(solve(root->left),solve(root->right));}
}  // namespace brute_force
