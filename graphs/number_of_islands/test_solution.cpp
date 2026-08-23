#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<char>>g{{'1','1','0'},{'0','1','0'},{'1','0','1'}};assert(brute_force::solve(g)==3);assert(optimal::solve(g)==3);
    return 0;
}
