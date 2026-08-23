#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("horse","ros")==3);assert(optimal::solve("horse","ros")==3);assert(optimal::solve("","abc")==3);
    return 0;
}
