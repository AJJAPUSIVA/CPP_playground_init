#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=brute_force::solve({3,9,20,15,7},{9,3,15,20,7});auto*b=optimal::solve({3,9,20,15,7},{9,3,15,20,7});assert(a->right->left->val==15&&b->right->left->val==15);playground::deleteTree(a);playground::deleteTree(b);
    return 0;
}
