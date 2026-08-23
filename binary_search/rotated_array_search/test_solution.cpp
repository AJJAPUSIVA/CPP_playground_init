#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{4,5,6,7,0,1,2};assert(brute_force::solve(a,0)==4);assert(optimal::solve(a,0)==4);assert(optimal::solve(a,3)==-1);
    return 0;
}
