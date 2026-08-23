#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve("babad");auto b=optimal::solve("babad");assert(a.size()==3);assert(b.size()==3);assert(optimal::solve("cbbd")=="bb");
    return 0;
}
