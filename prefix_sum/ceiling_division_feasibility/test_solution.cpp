#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({10,11},5,5));assert(optimal::solve({10,11},5,5));assert(!optimal::solve({10,11},5,4));
    return 0;
}
