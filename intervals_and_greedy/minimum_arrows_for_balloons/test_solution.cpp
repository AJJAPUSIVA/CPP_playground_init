#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(optimal::solve({{10,16},{2,8},{1,6},{7,12}})==2);
    return 0;
}
