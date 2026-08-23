#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{1,3,1};assert(brute_force::solve(a,1)==0);assert(optimal::solve(a,1)==0);
    return 0;
}
