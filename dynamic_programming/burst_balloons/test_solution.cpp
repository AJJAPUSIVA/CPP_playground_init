#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({3,1,5,8})==167);assert(optimal::solve({3,1,5,8})==167);
    return 0;
}
