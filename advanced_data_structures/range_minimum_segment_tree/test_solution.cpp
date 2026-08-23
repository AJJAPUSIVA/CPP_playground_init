#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::SegTree a({5,2,7,1,3});optimal::SegTree b({5,2,7,1,3});assert(a.query(1,3)==1&&b.query(1,3)==1);a.update(3,9);b.update(3,9);assert(a.query(1,3)==2&&b.query(1,3)==2);
    return 0;
}
