#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({1,5,11,5}));assert(optimal::solve({1,5,11,5}));assert(!optimal::solve({1,2,3,5}));
    return 0;
}
