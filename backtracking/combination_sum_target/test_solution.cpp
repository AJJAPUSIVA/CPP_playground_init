#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    auto a = brute_force::solve({2,3,6,7}, 7);
    auto b = optimal::solve({2,3,6,7}, 7);
    assert(a.size() == 2);
    assert(b.size() == 2);

    return 0;
}
