#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(2,{{1,0}}));assert(optimal::solve(2,{{1,0}}));assert(!optimal::solve(2,{{1,0},{0,1}}));
    return 0;
}
