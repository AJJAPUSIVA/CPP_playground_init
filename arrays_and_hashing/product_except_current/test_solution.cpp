#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    std::vector<long long> expected{24,12,8,6};
    assert(brute_force::solve({1,2,3,4}) == expected);
    assert(optimal::solve({1,2,3,4}) == expected);

    return 0;
}
