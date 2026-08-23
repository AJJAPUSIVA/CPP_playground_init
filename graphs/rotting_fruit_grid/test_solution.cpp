#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>g{{2,1,1},{1,1,0},{0,1,1}};assert(brute_force::solve(g)==4);assert(optimal::solve(g)==4);
    return 0;
}
