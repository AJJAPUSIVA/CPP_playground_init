#include "../../include/playground_types.hpp"

namespace brute_force {
void preorder(playground::TreeNode*r,std::vector<playground::TreeNode*>&v){if(!r)return;v.push_back(r);preorder(r->left,v);preorder(r->right,v);}void solve(playground::TreeNode*r){std::vector<playground::TreeNode*>v;preorder(r,v);for(std::size_t i=0;i<v.size();++i){v[i]->left=nullptr;v[i]->right=i+1<v.size()?v[i+1]:nullptr;}}
}  // namespace brute_force
