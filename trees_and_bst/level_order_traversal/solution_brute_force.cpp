#include "../../include/playground_types.hpp"

namespace brute_force {
void dfs(playground::TreeNode*r,int d,std::vector<std::vector<int>>&o){if(!r)return;if(d==static_cast<int>(o.size()))o.push_back({});o[d].push_back(r->val);dfs(r->left,d+1,o);dfs(r->right,d+1,o);}std::vector<std::vector<int>> solve(playground::TreeNode*r){std::vector<std::vector<int>>o;dfs(r,0,o);return o;}
}  // namespace brute_force
