#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* solve(playground::ListNode* head){
    if(!head||!head->next)return head;auto*slow=head,*fast=head;while(fast->next&&fast->next->next){slow=slow->next;fast=fast->next->next;}
    auto*second=slow->next;slow->next=nullptr;playground::ListNode*prev=nullptr;while(second){auto*n=second->next;second->next=prev;prev=second;second=n;}second=prev;auto*first=head;
    while(second){auto*n1=first->next,*n2=second->next;first->next=second;second->next=n1;first=n1;second=n2;}return head;
}
}  // namespace optimal
