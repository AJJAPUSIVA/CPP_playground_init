#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({1,0,2})==5);assert(optimal::solve({1,0,2})==5);
    return 0;
}
