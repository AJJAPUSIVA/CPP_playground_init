#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{1,3,5,6}; assert(brute_force::solve(a,5)==2); assert(optimal::solve(a,2)==1); assert(optimal::solve(a,7)==4);
    return 0;
}
