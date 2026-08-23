#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({2,7,9,3,1})==12);assert(optimal::solve({2,7,9,3,1})==12);assert(optimal::solve({})==0);
    return 0;
}
