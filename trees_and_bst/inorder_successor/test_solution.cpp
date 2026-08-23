#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(5,new playground::TreeNode(3),new playground::TreeNode(7));assert(brute_force::solve(r,3)==5);assert(optimal::solve(r,3)==5);assert(!optimal::solve(r,7));playground::deleteTree(r);
    return 0;
}
