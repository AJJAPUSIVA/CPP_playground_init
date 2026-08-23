#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    std::vector<std::vector<int>> e{{1,0,1},{0,0,0},{1,0,1}};
    std::vector<std::vector<int>> m{{1,1,1},{1,0,1},{1,1,1}};
    assert(brute_force::solve(m)==e); assert(optimal::solve(m)==e);

    return 0;
}
