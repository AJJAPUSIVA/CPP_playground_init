#include "../../include/playground_types.hpp"

namespace optimal {
int solve(playground::TreeNode*root){if(!root)return 0;std::queue<playground::TreeNode*>q;q.push(root);int d=0;while(!q.empty()){int n=q.size();++d;while(n--){auto*x=q.front();q.pop();if(x->left)q.push(x->left);if(x->right)q.push(x->right);}}return d;}
}  // namespace optimal
