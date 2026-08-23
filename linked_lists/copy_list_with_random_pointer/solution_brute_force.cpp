#include "../../include/playground_types.hpp"

namespace brute_force {
playground::RandomNode* solve(playground::RandomNode* head){
    if(!head)return nullptr;std::unordered_map<playground::RandomNode*,playground::RandomNode*>m;for(auto*p=head;p;p=p->next)m[p]=new playground::RandomNode(p->val);for(auto*p=head;p;p=p->next){m[p]->next=p->next?m[p->next]:nullptr;m[p]->random=p->random?m[p->random]:nullptr;}return m[head];
}
}  // namespace brute_force
