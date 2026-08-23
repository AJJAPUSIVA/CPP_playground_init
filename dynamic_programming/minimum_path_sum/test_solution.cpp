#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>g{{1,3,1},{1,5,1},{4,2,1}};assert(brute_force::solve(g)==7);assert(optimal::solve(g)==7);
    return 0;
}
