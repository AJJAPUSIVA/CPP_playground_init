#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{3,4,5,1,2};assert(brute_force::solve(a)==1);assert(optimal::solve(a)==1);
    return 0;
}
