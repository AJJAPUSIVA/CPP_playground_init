#include "../../include/playground_types.hpp"

namespace brute_force {
int h(playground::TreeNode*r){return r?1+std::max(h(r->left),h(r->right)):0;}bool solve(playground::TreeNode*r){if(!r)return true;return std::abs(h(r->left)-h(r->right))<=1&&solve(r->left)&&solve(r->right);}
}  // namespace brute_force
