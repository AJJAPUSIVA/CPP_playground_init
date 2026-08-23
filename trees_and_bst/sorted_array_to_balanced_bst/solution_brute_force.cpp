#include "../../include/playground_types.hpp"

namespace brute_force {
playground::TreeNode* build(const std::vector<int>&a,int l,int r){if(l>=r)return nullptr;int m=(l+r)/2;return new playground::TreeNode(a[m],build(a,l,m),build(a,m+1,r));}playground::TreeNode* solve(const std::vector<int>&a){return build(a,0,a.size());}
}  // namespace brute_force
