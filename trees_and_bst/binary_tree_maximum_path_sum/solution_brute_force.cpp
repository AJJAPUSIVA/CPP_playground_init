#include "../../include/playground_types.hpp"

namespace brute_force {
void nodes(playground::TreeNode*r,std::vector<playground::TreeNode*>&v){if(!r)return;v.push_back(r);nodes(r->left,v);nodes(r->right,v);}long long solve(playground::TreeNode*r){long long best=std::numeric_limits<long long>::lowest();std::function<long long(playground::TreeNode*)>dfs=[&](playground::TreeNode*x){if(!x)return 0LL;long long l=std::max(0LL,dfs(x->left)),rr=std::max(0LL,dfs(x->right));best=std::max(best,l+rr+x->val);return x->val+std::max(l,rr);};dfs(r);return r?best:0;}
}  // namespace brute_force
