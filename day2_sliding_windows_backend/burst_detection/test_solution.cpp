#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<long long>t{1,2,3,12};assert(brute_force::solve(t,10)==std::vector<int>({1,2,3,2}));assert(optimal::solve(t,10)==std::vector<int>({1,2,3,2}));
    return 0;
}
