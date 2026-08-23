#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>g{{1,0},{0,1}};assert(brute_force::solve(g)==3);assert(optimal::solve(g)==3);assert(optimal::solve({{1,1},{1,1}})==4);
    return 0;
}
