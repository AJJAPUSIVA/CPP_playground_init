#include "../../include/playground_types.hpp"

namespace brute_force {
void vals(playground::TreeNode*r,std::vector<int>&v){if(!r)return;v.push_back(r->val);vals(r->left,v);vals(r->right,v);}int solve(playground::TreeNode*r,int k){std::vector<int>v;vals(r,v);std::sort(v.begin(),v.end());return v.at(k-1);}
}  // namespace brute_force
