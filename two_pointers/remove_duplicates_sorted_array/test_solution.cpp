#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>e{0,1,2,3,4};assert(brute_force::solve({0,0,1,1,1,2,2,3,3,4})==e);assert(optimal::solve({0,0,1,1,1,2,2,3,3,4})==e);
    return 0;
}
