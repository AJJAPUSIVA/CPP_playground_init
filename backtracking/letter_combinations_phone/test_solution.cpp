#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    assert(brute_force::solve("23").size() == 9);
    assert(optimal::solve("23").size() == 9);
    assert(optimal::solve("").empty());

    return 0;
}
