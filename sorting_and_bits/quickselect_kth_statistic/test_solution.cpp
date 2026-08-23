#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({7,10,4,3,20,15},3)==7);assert(optimal::solve({7,10,4,3,20,15},3)==7);
    return 0;
}
