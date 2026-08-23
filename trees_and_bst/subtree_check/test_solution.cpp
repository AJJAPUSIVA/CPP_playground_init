#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(3,new playground::TreeNode(4,new playground::TreeNode(1),new playground::TreeNode(2)),new playground::TreeNode(5));auto*s=new playground::TreeNode(4,new playground::TreeNode(1),new playground::TreeNode(2));assert(brute_force::solve(r,s));assert(optimal::solve(r,s));playground::deleteTree(r);playground::deleteTree(s);
    return 0;
}
