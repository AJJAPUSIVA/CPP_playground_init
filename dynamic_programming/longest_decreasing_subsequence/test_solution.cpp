#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({9,4,3,2,5,4,3,2})==5);assert(optimal::solve({9,4,3,2,5,4,3,2})==5);
    return 0;
}
