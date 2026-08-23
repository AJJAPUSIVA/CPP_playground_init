#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<std::vector<int>> solve(playground::TreeNode*r){if(!r)return{};if(!r->left&&!r->right)return{{r->val}};std::vector<std::vector<int>>o;for(auto child:{r->left,r->right})for(auto p:solve(child)){p.insert(p.begin(),r->val);o.push_back(std::move(p));}return o;}
}  // namespace brute_force
