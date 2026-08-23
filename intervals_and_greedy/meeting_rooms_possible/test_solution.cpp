#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(!brute_force::solve({{0,30},{5,10},{15,20}}));assert(!optimal::solve({{0,30},{5,10},{15,20}}));assert(optimal::solve({{7,10},{10,12}}));
    return 0;
}
