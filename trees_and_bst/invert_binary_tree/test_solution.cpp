#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=new playground::TreeNode(2,new playground::TreeNode(1),new playground::TreeNode(3));brute_force::solve(a);assert(a->left->val==3);playground::deleteTree(a);auto*b=new playground::TreeNode(2,new playground::TreeNode(1),new playground::TreeNode(3));optimal::solve(b);assert(b->left->val==3);playground::deleteTree(b);
    return 0;
}
