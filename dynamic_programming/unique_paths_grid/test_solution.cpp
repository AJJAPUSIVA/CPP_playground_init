#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(3,7)==28);assert(optimal::solve(3,7)==28);assert(optimal::solve(1,1)==1);
    return 0;
}
