#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(1,new playground::TreeNode(2),new playground::TreeNode(3));auto s=brute_force::serialize(r);auto*a=brute_force::deserialize(s);auto t=optimal::serialize(r);auto*b=optimal::deserialize(t);assert(a->right->val==3&&b->right->val==3);playground::deleteTree(r);playground::deleteTree(a);playground::deleteTree(b);
    return 0;
}
