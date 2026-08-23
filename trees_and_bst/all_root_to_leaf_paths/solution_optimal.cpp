#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(playground::TreeNode*r,std::vector<int>&cur,std::vector<std::vector<int>>&o){if(!r)return;cur.push_back(r->val);if(!r->left&&!r->right)o.push_back(cur);else{dfs(r->left,cur,o);dfs(r->right,cur,o);}cur.pop_back();}std::vector<std::vector<int>> solve(playground::TreeNode*r){std::vector<std::vector<int>>o;std::vector<int>c;dfs(r,c,o);return o;}
}  // namespace optimal
