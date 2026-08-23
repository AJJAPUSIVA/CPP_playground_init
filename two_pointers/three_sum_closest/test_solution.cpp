#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{-1,2,1,-4};assert(brute_force::solve(a,1)==2);assert(optimal::solve(a,1)==2);
    return 0;
}
