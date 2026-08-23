#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("226")==3);assert(optimal::solve("226")==3);assert(optimal::solve("06")==0);
    return 0;
}
