#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode* head){std::unordered_set<playground::ListNode*>s;for(auto*p=head;p;p=p->next)if(!s.insert(p).second)return p;return nullptr;}
}  // namespace brute_force
