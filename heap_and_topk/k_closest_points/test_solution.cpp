#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Point>p{{1,3},{-2,2},{2,-2}};assert(brute_force::solve(p,2).size()==2);assert(optimal::solve(p,2).size()==2);
    return 0;
}
