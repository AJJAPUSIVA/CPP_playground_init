#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>w{1,2,3,4,5,6,7,8,9,10};assert(brute_force::solve(w,5)==15);assert(optimal::solve(w,5)==15);
    return 0;
}
