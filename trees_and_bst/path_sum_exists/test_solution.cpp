#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(5,new playground::TreeNode(4,new playground::TreeNode(11,new playground::TreeNode(7),new playground::TreeNode(2)),nullptr),new playground::TreeNode(8));assert(brute_force::solve(r,22));assert(optimal::solve(r,22));playground::deleteTree(r);
    return 0;
}
