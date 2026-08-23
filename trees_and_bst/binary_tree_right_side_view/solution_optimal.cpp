#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(playground::TreeNode*r,int d,std::vector<int>&o){if(!r)return;if(d==static_cast<int>(o.size()))o.push_back(r->val);dfs(r->right,d+1,o);dfs(r->left,d+1,o);}std::vector<int> solve(playground::TreeNode*r){std::vector<int>o;dfs(r,0,o);return o;}
}  // namespace optimal
