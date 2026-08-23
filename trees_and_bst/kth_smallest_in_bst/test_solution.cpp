#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(3,new playground::TreeNode(1,nullptr,new playground::TreeNode(2)),new playground::TreeNode(4));assert(brute_force::solve(r,1)==1);assert(optimal::solve(r,1)==1);playground::deleteTree(r);
    return 0;
}
