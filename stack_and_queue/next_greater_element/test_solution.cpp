#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>e{4,2,4,-1,-1};assert(brute_force::solve({2,1,2,4,3})==e);assert(optimal::solve({2,1,2,4,3})==e);
    return 0;
}
