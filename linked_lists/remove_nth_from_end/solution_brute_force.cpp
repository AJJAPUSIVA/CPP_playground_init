#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode* head,int n){std::vector<int>v=playground::listToVector(head);if(n>0&&n<=(int)v.size())v.erase(v.end()-n);return playground::vectorToList(v);}
}  // namespace brute_force
