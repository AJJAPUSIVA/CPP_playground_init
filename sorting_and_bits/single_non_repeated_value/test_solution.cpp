#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({4,1,2,1,2})==4);assert(optimal::solve({4,1,2,1,2})==4);
    return 0;
}
