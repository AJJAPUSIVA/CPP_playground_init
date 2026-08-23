#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode* a,playground::ListNode* b){
    std::vector<int>v;for(auto*p=a;p;p=p->next)v.push_back(p->val);for(auto*p=b;p;p=p->next)v.push_back(p->val);std::sort(v.begin(),v.end());return playground::vectorToList(v);
}
}  // namespace brute_force
