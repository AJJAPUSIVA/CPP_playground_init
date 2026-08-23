#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("bbbab")==4);assert(optimal::solve("bbbab")==4);assert(optimal::solve("")==0);
    return 0;
}
