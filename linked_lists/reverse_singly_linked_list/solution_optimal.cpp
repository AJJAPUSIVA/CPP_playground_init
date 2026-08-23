#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* solve(playground::ListNode* head){
    playground::ListNode* prev=nullptr;while(head){auto*n=head->next;head->next=prev;prev=head;head=n;}return prev;
}
}  // namespace optimal
