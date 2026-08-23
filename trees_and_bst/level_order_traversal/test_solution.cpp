#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*r=new playground::TreeNode(3,new playground::TreeNode(9),new playground::TreeNode(20,new playground::TreeNode(15),new playground::TreeNode(7)));auto a=optimal::solve(r);assert(a.size()==3&&a[2]==std::vector<int>({15,7}));playground::deleteTree(r);
    return 0;
}
