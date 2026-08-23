#include "../../include/playground_types.hpp"

namespace optimal {
std::optional<int> solve(playground::TreeNode*r,int target){playground::TreeNode*succ=nullptr;while(r){if(target<r->val){succ=r;r=r->left;}else r=r->right;}return succ?std::optional<int>(succ->val):std::nullopt;}
}  // namespace optimal
