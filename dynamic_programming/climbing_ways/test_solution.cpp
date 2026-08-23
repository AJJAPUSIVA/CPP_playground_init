#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(5)==8);assert(optimal::solve(5)==8);assert(optimal::solve(0)==1);
    return 0;
}
