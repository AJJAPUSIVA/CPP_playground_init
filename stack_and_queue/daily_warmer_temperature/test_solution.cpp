#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>e{1,1,4,2,1,1,0,0};std::vector<int>t{73,74,75,71,69,72,76,73};assert(brute_force::solve(t)==e);assert(optimal::solve(t)==e);
    return 0;
}
