#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{7,2,5,10,8};assert(brute_force::solve(a,2)==18);assert(optimal::solve(a,2)==18);
    return 0;
}
