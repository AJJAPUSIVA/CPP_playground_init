#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({4,5,0,-2,-3,1},5)==7);assert(optimal::solve({4,5,0,-2,-3,1},5)==7);
    return 0;
}
