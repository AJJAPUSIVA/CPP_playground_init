#include "../../include/playground_types.hpp"

namespace optimal {
playground::ListNode* solve(playground::ListNode* head){auto*s=head,*f=head;do{if(!f||!f->next)return nullptr;s=s->next;f=f->next->next;}while(s!=f);s=head;while(s!=f){s=s->next;f=f->next;}return s;}
}  // namespace optimal
