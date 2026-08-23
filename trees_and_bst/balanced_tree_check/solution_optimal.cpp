#include "../../include/playground_types.hpp"

namespace optimal {
int h(playground::TreeNode*r){if(!r)return 0;int l=h(r->left);if(l<0)return-1;int rr=h(r->right);if(rr<0||std::abs(l-rr)>1)return-1;return 1+std::max(l,rr);}bool solve(playground::TreeNode*r){return h(r)>=0;}
}  // namespace optimal
