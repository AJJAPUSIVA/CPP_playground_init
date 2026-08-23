#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    auto a = brute_force::solve({1,2,3});
    auto b = optimal::solve({1,2,3});
    assert(a.size() == 6);
    assert(b.size() == 6);
    assert(optimal::solve({}).size() == 1);

    return 0;
}
