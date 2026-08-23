#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("ADOBECODEBANC","ABC")=="BANC");assert(optimal::solve("ADOBECODEBANC","ABC")=="BANC");
    return 0;
}
