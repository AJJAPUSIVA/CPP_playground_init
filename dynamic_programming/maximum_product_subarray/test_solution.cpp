#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({2,3,-2,4})==6);assert(optimal::solve({2,3,-2,4})==6);assert(optimal::solve({-2,0,-1})==0);
    return 0;
}
