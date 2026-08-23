#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>l{{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};assert(brute_force::solve(l)==std::make_pair(20,24));assert(optimal::solve(l)==std::make_pair(20,24));
    return 0;
}
