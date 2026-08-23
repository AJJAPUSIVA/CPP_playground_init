#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::vector<int>> solve(playground::TreeNode*r){std::vector<std::vector<int>>o;if(!r)return o;std::queue<playground::TreeNode*>q;q.push(r);while(!q.empty()){int n=q.size();o.push_back({});while(n--){auto*x=q.front();q.pop();o.back().push_back(x->val);if(x->left)q.push(x->left);if(x->right)q.push(x->right);}}return o;}
}  // namespace optimal
