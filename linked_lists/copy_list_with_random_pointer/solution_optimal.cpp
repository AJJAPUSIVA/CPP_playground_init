#include "../../include/playground_types.hpp"

namespace optimal {
playground::RandomNode* solve(playground::RandomNode* head){
    if(!head)return nullptr;for(auto*p=head;p;){auto*n=p->next;p->next=new playground::RandomNode(p->val);p->next->next=n;p=n;}
    for(auto*p=head;p;p=p->next->next)if(p->random)p->next->random=p->random->next;
    auto*copy=head->next;for(auto*p=head;p;){auto*c=p->next;p->next=c->next;p=p->next;if(p)c->next=p->next;}return copy;
}
}  // namespace optimal
