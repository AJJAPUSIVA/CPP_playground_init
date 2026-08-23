#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>h{1,8,6,2,5,4,8,3,7};assert(brute_force::solve(h)==49);assert(optimal::solve(h)==49);
    return 0;
}
