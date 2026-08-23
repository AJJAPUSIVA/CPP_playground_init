#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(1,new playground::TreeNode(2),new playground::TreeNode(3));assert(brute_force::solve(r).size()==2);assert(optimal::solve(r).size()==2);playground::deleteTree(r);
    return 0;
}
