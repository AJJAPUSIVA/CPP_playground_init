#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>h{{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};assert(brute_force::solve(h).size()==7);assert(optimal::solve(h).size()==7);
    return 0;
}
