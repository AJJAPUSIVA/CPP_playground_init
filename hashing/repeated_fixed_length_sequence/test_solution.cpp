#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",10);auto b=optimal::solve("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",10);assert(a.size()==2);assert(b.size()==2);
    return 0;
}
