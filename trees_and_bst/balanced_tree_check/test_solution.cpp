#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(1,new playground::TreeNode(2,new playground::TreeNode(3,new playground::TreeNode(4),nullptr),nullptr),new playground::TreeNode(2));assert(!brute_force::solve(r));assert(!optimal::solve(r));playground::deleteTree(r);
    return 0;
}
