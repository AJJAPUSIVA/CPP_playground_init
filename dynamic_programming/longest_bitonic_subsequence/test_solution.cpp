#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({1,11,2,10,4,5,2,1})==6);assert(optimal::solve({1,11,2,10,4,5,2,1})==6);
    return 0;
}
