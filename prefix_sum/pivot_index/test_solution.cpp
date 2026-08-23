#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({1,7,3,6,5,6})==3);assert(optimal::solve({1,7,3,6,5,6})==3);
    return 0;
}
