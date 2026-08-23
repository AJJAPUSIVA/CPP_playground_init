#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({1,2,5},5)==4);assert(optimal::solve({1,2,5},5)==4);assert(optimal::solve({2},3)==0);
    return 0;
}
