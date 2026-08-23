#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(3,{{0,1},{1,2},{2,0}}));assert(optimal::solve(3,{{0,1},{1,2},{2,0}}));assert(!optimal::solve(3,{{0,1},{1,2}}));
    return 0;
}
