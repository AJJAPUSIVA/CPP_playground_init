#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    std::vector<std::vector<int>> e{{-1,-1,2},{-1,0,1}};
    assert(brute_force::solve({-1,0,1,2,-1,-4})==e);
    assert(optimal::solve({-1,0,1,2,-1,-4})==e);

    return 0;
}
