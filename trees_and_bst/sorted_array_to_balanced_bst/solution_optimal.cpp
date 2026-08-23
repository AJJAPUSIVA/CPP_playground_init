#include "../../include/playground_types.hpp"

namespace optimal {
playground::TreeNode* solve(const std::vector<int>&a){if(a.empty())return nullptr;struct R{int l,r;playground::TreeNode**slot;};playground::TreeNode*root=nullptr;std::queue<R>q;q.push({0,static_cast<int>(a.size()),&root});while(!q.empty()){auto x=q.front();q.pop();if(x.l>=x.r){*x.slot=nullptr;continue;}int m=(x.l+x.r)/2;*x.slot=new playground::TreeNode(a[m]);q.push({x.l,m,&((*x.slot)->left)});q.push({m+1,x.r,&((*x.slot)->right)});}return root;}
}  // namespace optimal
