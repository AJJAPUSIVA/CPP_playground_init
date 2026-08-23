#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* merge(playground::ListNode*a,playground::ListNode*b){playground::ListNode d;auto*t=&d;while(a&&b){auto*&p=a->val<=b->val?a:b;t->next=p;p=p->next;t=t->next;}t->next=a?a:b;return d.next;}
playground::ListNode* solve(playground::ListNode* h){if(!h||!h->next)return h;auto*s=h,*f=h->next;while(f&&f->next){s=s->next;f=f->next->next;}auto*r=s->next;s->next=nullptr;return merge(solve(h),solve(r));}
}  // namespace optimal
