#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({2,4,1,3,5})==3);assert(optimal::solve({2,4,1,3,5})==3);
    return 0;
}
