#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Edge>e{{0,1,1},{0,2,0},{2,1,0}};assert(brute_force::solve(3,e,0,1)==0);assert(optimal::solve(3,e,0,1)==0);
    return 0;
}
