#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("rabbbit","rabbit")==3);assert(optimal::solve("rabbbit","rabbit")==3);
    return 0;
}
