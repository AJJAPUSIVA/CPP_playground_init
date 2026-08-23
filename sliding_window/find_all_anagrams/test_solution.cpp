#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>e{0,6};assert(brute_force::solve("cbaebabacd","abc")==e);assert(optimal::solve("cbaebabacd","abc")==e);
    return 0;
}
