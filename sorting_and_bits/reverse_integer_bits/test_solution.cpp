#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(43261596U)==964176192U);assert(optimal::solve(43261596U)==964176192U);
    return 0;
}
