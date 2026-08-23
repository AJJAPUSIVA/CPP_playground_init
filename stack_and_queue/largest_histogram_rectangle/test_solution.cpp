#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>h{2,1,5,6,2,3};assert(brute_force::solve(h)==10);assert(optimal::solve(h)==10);
    return 0;
}
