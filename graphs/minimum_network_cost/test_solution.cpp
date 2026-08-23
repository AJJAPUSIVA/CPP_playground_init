#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Edge>e{{0,1,1},{1,2,2},{0,2,5}};assert(brute_force::solve(3,e)==3);assert(optimal::solve(3,e)==3);
    return 0;
}
