#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* solve(playground::ListNode* head,int n){
    playground::ListNode dummy(0,head);auto*fast=&dummy,*slow=&dummy;for(int i=0;i<n;++i)fast=fast->next;while(fast&&fast->next){fast=fast->next;slow=slow->next;}if(slow->next){auto*victim=slow->next;slow->next=victim->next;delete victim;}return dummy.next;
}
}  // namespace optimal
