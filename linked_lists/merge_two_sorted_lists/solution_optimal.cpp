#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* solve(playground::ListNode* a,playground::ListNode* b){
    playground::ListNode dummy;auto*t=&dummy;while(a&&b){if(a->val<=b->val){t->next=new playground::ListNode(a->val);a=a->next;}else{t->next=new playground::ListNode(b->val);b=b->next;}t=t->next;}for(auto*p=a?a:b;p;p=p->next){t->next=new playground::ListNode(p->val);t=t->next;}return dummy.next;
}
}  // namespace optimal
