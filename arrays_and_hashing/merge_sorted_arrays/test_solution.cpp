#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    std::vector<int> e{1,2,2,3,5,6};
    assert(brute_force::solve({1,2,3},{2,5,6}) == e);
    assert(optimal::solve({1,2,3},{2,5,6}) == e);

    return 0;
}
