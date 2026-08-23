#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve("aab"),b=optimal::solve("aab");assert(a.size()==3);assert(b.size()==3);assert(optimal::solve("aaab").empty());
    return 0;
}
