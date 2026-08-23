#include "../../include/playground_types.hpp"

namespace brute_force {
playground::TreeNode* rec(const std::vector<int>&pre,int ps,int pe,const std::vector<int>&in,int is,int ie){if(ps>=pe)return nullptr;int root=pre[ps],k=is;while(in[k]!=root)++k;int left=k-is;return new playground::TreeNode(root,rec(pre,ps+1,ps+1+left,in,is,k),rec(pre,ps+1+left,pe,in,k+1,ie));}playground::TreeNode* solve(const std::vector<int>&pre,const std::vector<int>&in){return rec(pre,0,pre.size(),in,0,in.size());}
}  // namespace brute_force
