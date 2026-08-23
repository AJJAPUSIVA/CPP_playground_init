#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(playground::ListNode* head){auto*s=head,*f=head;while(f&&f->next){s=s->next;f=f->next->next;if(s==f)return true;}return false;}
}  // namespace optimal
