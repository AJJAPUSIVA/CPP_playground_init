#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(6,new playground::TreeNode(2,new playground::TreeNode(0),new playground::TreeNode(4)),new playground::TreeNode(8));assert(brute_force::solve(r,2,8)==6);assert(optimal::solve(r,2,4)==2);playground::deleteTree(r);
    return 0;
}
