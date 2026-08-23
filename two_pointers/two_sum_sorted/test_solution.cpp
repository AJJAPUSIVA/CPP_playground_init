#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{2,7,11,15};assert(brute_force::solve(a,9)==std::make_pair(0,1));assert(optimal::solve(a,9)==std::make_pair(0,1));
    return 0;
}
