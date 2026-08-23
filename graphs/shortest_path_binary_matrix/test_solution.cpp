#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>g{{0,1},{1,0}};assert(brute_force::solve(g)==2);assert(optimal::solve(g)==2);
    return 0;
}
