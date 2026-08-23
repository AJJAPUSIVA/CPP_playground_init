#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{5,7,7,8,8,10}; assert(brute_force::solve(a,8)==std::make_pair(3,4)); assert(optimal::solve(a,8)==std::make_pair(3,4));
    return 0;
}
