#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>a{{1,3},{0,2},{1,3},{0,2}};assert(brute_force::solve(a));assert(optimal::solve(a));std::vector<std::vector<int>>b{{1,2},{0,2},{0,1}};assert(!optimal::solve(b));
    return 0;
}
