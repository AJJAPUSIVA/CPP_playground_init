#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(1,new playground::TreeNode(2,nullptr,new playground::TreeNode(5)),new playground::TreeNode(3,nullptr,new playground::TreeNode(4)));assert(optimal::solve(r)==std::vector<int>({1,3,4}));playground::deleteTree(r);
    return 0;
}
