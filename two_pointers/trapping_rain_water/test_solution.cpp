#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>h{0,1,0,2,1,0,1,3,2,1,2,1};assert(brute_force::solve(h)==6);assert(optimal::solve(h)==6);
    return 0;
}
