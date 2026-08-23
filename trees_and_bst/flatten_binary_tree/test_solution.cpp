#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=new playground::TreeNode(1,new playground::TreeNode(2),new playground::TreeNode(5));brute_force::solve(a);assert(!a->left&&a->right->val==2);playground::deleteTree(a);auto*b=new playground::TreeNode(1,new playground::TreeNode(2),new playground::TreeNode(5));optimal::solve(b);assert(!b->left&&b->right->val==2);playground::deleteTree(b);
    return 0;
}
