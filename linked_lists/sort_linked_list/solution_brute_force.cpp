#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode* head){auto v=playground::listToVector(head);std::sort(v.begin(),v.end());return playground::vectorToList(v);}
}  // namespace brute_force
