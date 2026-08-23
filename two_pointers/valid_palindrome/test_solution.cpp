#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("A man, a plan, a canal: Panama"));assert(optimal::solve("A man, a plan, a canal: Panama"));assert(!optimal::solve("race a car"));
    return 0;
}
