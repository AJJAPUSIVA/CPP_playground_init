#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::Fenwick a({1,2,3,4});optimal::Fenwick b({1,2,3,4});assert(a.prefix(2)==6&&b.prefix(2)==6);a.add(1,5);b.add(1,5);assert(a.prefix(2)==11&&b.prefix(2)==11);
    return 0;
}
