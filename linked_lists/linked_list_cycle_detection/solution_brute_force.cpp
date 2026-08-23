#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(playground::ListNode* head){std::unordered_set<playground::ListNode*>s;for(auto*p=head;p;p=p->next)if(!s.insert(p).second)return true;return false;}
}  // namespace brute_force
