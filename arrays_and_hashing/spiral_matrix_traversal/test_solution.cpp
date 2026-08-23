#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    std::vector<int> e{1,2,3,6,9,8,7,4,5};
    std::vector<std::vector<int>> m{{1,2,3},{4,5,6},{7,8,9}};
    assert(brute_force::solve(m)==e); assert(optimal::solve(m)==e);

    return 0;
}
