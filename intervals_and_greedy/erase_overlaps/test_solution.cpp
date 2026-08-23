#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({{1,2},{2,3},{3,4},{1,3}})==1);assert(optimal::solve({{1,2},{2,3},{3,4},{1,3}})==1);
    return 0;
}
