#include "../../include/playground_types.hpp"

namespace brute_force {
bool path(playground::TreeNode*r,int x,std::vector<playground::TreeNode*>&p){if(!r)return false;p.push_back(r);if(r->val==x)return true;if(path(r->left,x,p)||path(r->right,x,p))return true;p.pop_back();return false;}int solve(playground::TreeNode*r,int a,int b){std::vector<playground::TreeNode*>x,y;path(r,a,x);path(r,b,y);int ans=r->val;for(std::size_t i=0;i<std::min(x.size(),y.size())&&x[i]==y[i];++i)ans=x[i]->val;return ans;}
}  // namespace brute_force
