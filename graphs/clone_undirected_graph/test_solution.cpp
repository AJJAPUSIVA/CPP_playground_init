#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>g{{1},{0,2},{1}};assert(brute_force::solve(g)==g);assert(optimal::solve(g)==g);
    return 0;
}
