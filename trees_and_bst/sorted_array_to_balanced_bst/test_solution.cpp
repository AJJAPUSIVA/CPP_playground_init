#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=brute_force::solve({-10,-3,0,5,9});auto*b=optimal::solve({-10,-3,0,5,9});assert(a&&b&&a->val==0&&b->val==0);playground::deleteTree(a);playground::deleteTree(b);
    return 0;
}
