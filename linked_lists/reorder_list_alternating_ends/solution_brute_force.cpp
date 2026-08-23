#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode* head){auto v=playground::listToVector(head);std::vector<int>o;int l=0,r=v.size()-1;while(l<=r){o.push_back(v[l++]);if(l<=r)o.push_back(v[r--]);}return playground::vectorToList(o);}
}  // namespace brute_force
