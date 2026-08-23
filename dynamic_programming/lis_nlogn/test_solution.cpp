#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({10,9,2,5,3,7,101,18})==4);assert(optimal::solve({10,9,2,5,3,7,101,18})==4);assert(optimal::solve({})==0);
    return 0;
}
