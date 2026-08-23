#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(-10,new playground::TreeNode(9),new playground::TreeNode(20,new playground::TreeNode(15),new playground::TreeNode(7)));assert(brute_force::solve(r)==42);assert(optimal::solve(r)==42);playground::deleteTree(r);
    return 0;
}
