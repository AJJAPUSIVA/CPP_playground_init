#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* solve(playground::ListNode*a,playground::ListNode*b){playground::ListNode d;auto*t=&d;int carry=0;while(a||b||carry){int s=carry+(a?a->val:0)+(b?b->val:0);t->next=new playground::ListNode(s%10);t=t->next;carry=s/10;if(a)a=a->next;if(b)b=b->next;}return d.next;}
}  // namespace optimal
