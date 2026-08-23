#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(11)==3);assert(optimal::solve(11)==3);assert(optimal::solve(0)==0);
    return 0;
}
