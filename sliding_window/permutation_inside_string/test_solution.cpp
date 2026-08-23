#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("ab","eidbaooo"));assert(optimal::solve("ab","eidbaooo"));assert(!optimal::solve("ab","eidboaoo"));
    return 0;
}
