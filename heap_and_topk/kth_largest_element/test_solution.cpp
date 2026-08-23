#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({3,2,1,5,6,4},2)==5);assert(optimal::solve({3,2,1,5,6,4},2)==5);
    return 0;
}
