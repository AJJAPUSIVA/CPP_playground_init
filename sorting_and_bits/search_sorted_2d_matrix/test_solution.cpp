#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>m{{1,3,5,7},{10,11,16,20},{23,30,34,60}};assert(brute_force::solve(m,3));assert(optimal::solve(m,3));assert(!optimal::solve(m,13));
    return 0;
}
