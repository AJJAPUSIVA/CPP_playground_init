#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("abcde","ace")==3);assert(optimal::solve("abcde","ace")==3);assert(optimal::solve("abc","def")==0);
    return 0;
}
