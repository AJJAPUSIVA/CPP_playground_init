#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("AABABBA",1)==4);assert(optimal::solve("AABABBA",1)==4);
    return 0;
}
