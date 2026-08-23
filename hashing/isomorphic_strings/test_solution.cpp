#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("egg","add"));assert(optimal::solve("egg","add"));assert(!optimal::solve("foo","bar"));
    return 0;
}
