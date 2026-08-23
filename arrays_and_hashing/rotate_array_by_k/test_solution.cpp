#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    std::vector<int> expected{5,6,7,1,2,3,4};
    assert(brute_force::solve({1,2,3,4,5,6,7},3) == expected);
    assert(optimal::solve({1,2,3,4,5,6,7},3) == expected);

    return 0;
}
