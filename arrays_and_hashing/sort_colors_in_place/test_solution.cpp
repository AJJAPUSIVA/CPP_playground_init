#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    std::vector<int> e{0,0,1,1,2,2};
    assert(brute_force::solve({2,0,2,1,1,0})==e);
    assert(optimal::solve({2,0,2,1,1,0})==e);

    return 0;
}
