#include "../../include/playground_types.hpp"

namespace optimal {
long long gain(playground::TreeNode*r,long long&best){if(!r)return 0;long long l=std::max(0LL,gain(r->left,best)),rr=std::max(0LL,gain(r->right,best));best=std::max(best,l+rr+r->val);return r->val+std::max(l,rr);}long long solve(playground::TreeNode*r){if(!r)return 0;long long b=std::numeric_limits<long long>::lowest();gain(r,b);return b;}
}  // namespace optimal
