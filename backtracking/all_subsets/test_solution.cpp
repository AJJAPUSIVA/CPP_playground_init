#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    assert(brute_force::solve({1,2,3}).size() == 8);
    assert(optimal::solve({1,2,3}).size() == 8);
    assert(optimal::solve({}).size() == 1);

    return 0;
}
