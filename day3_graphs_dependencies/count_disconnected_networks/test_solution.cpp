#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::pair<int,int>>e{{0,1},{1,2},{3,4}};assert(brute_force::solve(5,e)==2);assert(optimal::solve(5,e)==2);
    return 0;
}
