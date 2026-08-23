#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{2,3,1,2,4,3};assert(brute_force::solve(a,7)==2);assert(optimal::solve(a,7)==2);
    return 0;
}
