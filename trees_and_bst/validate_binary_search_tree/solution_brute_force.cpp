#include "../../include/playground_types.hpp"

namespace brute_force {
void vals(playground::TreeNode*r,std::vector<long long>&v){if(!r)return;vals(r->left,v);v.push_back(r->val);vals(r->right,v);}bool solve(playground::TreeNode*r){std::vector<long long>v;vals(r,v);return std::adjacent_find(v.begin(),v.end(),std::greater_equal<long long>())==v.end();}
}  // namespace brute_force
