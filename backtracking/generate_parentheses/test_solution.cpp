#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    assert(brute_force::solve(3).size() == 5);
    assert(optimal::solve(3).size() == 5);
    assert(optimal::solve(1) == std::vector<std::string>{"()"});

    return 0;
}
