#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>p{3,6,7,11};assert(brute_force::solve(p,8)==4);assert(optimal::solve(p,8)==4);
    return 0;
}
