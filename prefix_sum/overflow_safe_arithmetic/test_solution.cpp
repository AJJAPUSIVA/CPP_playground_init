#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(2,3)==5);assert(optimal::solve(2,3)==5);assert(!optimal::solve(std::numeric_limits<long long>::max(),1));
    return 0;
}
