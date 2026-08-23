#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>e{3,3,5,5,6,7};std::vector<int>a{1,3,-1,-3,5,3,6,7};assert(brute_force::solve(a,3)==e);assert(optimal::solve(a,3)==e);
    return 0;
}
