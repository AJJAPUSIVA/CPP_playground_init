#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{1,1,1,0,0,0,1,1,1,1,0};assert(brute_force::solve(a,2)==6);assert(optimal::solve(a,2)==6);
    return 0;
}
