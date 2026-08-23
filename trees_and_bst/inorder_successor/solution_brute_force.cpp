#include "../../include/playground_types.hpp"

namespace brute_force {
std::optional<int> solve(playground::TreeNode*r,int target){std::vector<int>v;std::function<void(playground::TreeNode*)>dfs=[&](auto*n){if(!n)return;dfs(n->left);v.push_back(n->val);dfs(n->right);};dfs(r);auto it=std::find(v.begin(),v.end(),target);if(it!=v.end()&&++it!=v.end())return*it;return std::nullopt;}
}  // namespace brute_force
