#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    assert(brute_force::solve("aab").size() == 2);
    assert(optimal::solve("aab").size() == 2);
    assert(optimal::solve("").size() == 1);

    return 0;
}
