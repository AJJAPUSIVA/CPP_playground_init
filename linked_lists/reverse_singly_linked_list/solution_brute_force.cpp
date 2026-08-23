#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode* head){
    std::vector<int> vals;for(auto*p=head;p;p=p->next)vals.push_back(p->val);
    playground::ListNode dummy;auto*t=&dummy;for(auto it=vals.rbegin();it!=vals.rend();++it){t->next=new playground::ListNode(*it);t=t->next;}return dummy.next;
}
}  // namespace brute_force
