#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    std::vector<int> expected{1,3,12,0,0};
    assert(brute_force::solve({0,1,0,3,12}) == expected);
    assert(optimal::solve({0,1,0,3,12}) == expected);

    return 0;
}
