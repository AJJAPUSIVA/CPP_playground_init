#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Interval>a{{1,3},{2,6},{8,10},{15,18}};assert(brute_force::solve(a).size()==3);assert(optimal::solve(a).size()==3);
    return 0;
}
