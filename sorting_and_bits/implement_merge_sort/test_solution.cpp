#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto e=std::vector<int>{1,2,3,4,5};assert(brute_force::solve({5,1,4,2,3})==e);assert(optimal::solve({5,1,4,2,3})==e);
    return 0;
}
