#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({23,2,4,6,7},6));assert(optimal::solve({23,2,4,6,7},6));assert(!optimal::solve({1,2,3},7));
    return 0;
}
