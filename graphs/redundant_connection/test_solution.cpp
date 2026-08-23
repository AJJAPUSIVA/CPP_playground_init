#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({{1,2},{1,3},{2,3}})==std::make_pair(2,3));assert(optimal::solve({{1,2},{1,3},{2,3}})==std::make_pair(2,3));
    return 0;
}
