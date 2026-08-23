#include "../../include/playground_types.hpp"

namespace brute_force {
playground::ListNode* solve(playground::ListNode*a,playground::ListNode*b){
    long long x=0,p=1;for(auto*n=a;n;n=n->next){x+=p*n->val;p*=10;}long long y=0;p=1;for(auto*n=b;n;n=n->next){y+=p*n->val;p*=10;}long long s=x+y;std::vector<int>v;if(!s)v.push_back(0);while(s){v.push_back(s%10);s/=10;}return playground::vectorToList(v);
}
}  // namespace brute_force
