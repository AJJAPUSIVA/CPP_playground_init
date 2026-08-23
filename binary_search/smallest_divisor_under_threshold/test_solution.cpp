#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{1,2,5,9};assert(brute_force::solve(a,6)==5);assert(optimal::solve(a,6)==5);
    return 0;
}
