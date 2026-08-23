#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve(8)==2);assert(optimal::solve(8)==2);assert(optimal::solve(16)==4);
    return 0;
}
