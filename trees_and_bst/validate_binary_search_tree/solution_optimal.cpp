#include "../../include/playground_types.hpp"

namespace optimal {
bool rec(playground::TreeNode*r,long long lo,long long hi){if(!r)return true;if(r->val<=lo||r->val>=hi)return false;return rec(r->left,lo,r->val)&&rec(r->right,r->val,hi);}bool solve(playground::TreeNode*r){return rec(r,std::numeric_limits<long long>::lowest(),std::numeric_limits<long long>::max());}
}  // namespace optimal
