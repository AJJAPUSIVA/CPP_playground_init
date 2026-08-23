#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    std::vector<int> a{1,3,4,2,2};
    assert(brute_force::solve(a)==2);
    assert(optimal::solve(a)==2);

    return 0;
}
