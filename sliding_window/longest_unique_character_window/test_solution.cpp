#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("abcabcbb")==3);assert(optimal::solve("abcabcbb")==3);assert(optimal::solve("bbbbb")==1);
    return 0;
}
