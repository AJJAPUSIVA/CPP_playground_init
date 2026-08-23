#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    std::vector<int> a{-2,1,-3,4,-1,2,1,-5,4};
    assert(brute_force::solve(a) == 6);
    assert(optimal::solve(a) == 6);
    assert(brute_force::solve({-3,-1,-2}) == -1);
    assert(optimal::solve({-3,-1,-2}) == -1);

    return 0;
}
