#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    assert(brute_force::solve(4).size() == 2);
    assert(optimal::solve(4).size() == 2);
    assert(optimal::solve(1).size() == 1);

    return 0;
}
