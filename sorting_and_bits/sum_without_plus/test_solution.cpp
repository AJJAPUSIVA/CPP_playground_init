#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(3,5)==8);assert(optimal::solve(3,5)==8);assert(optimal::solve(-2,3)==1);
    return 0;
}
