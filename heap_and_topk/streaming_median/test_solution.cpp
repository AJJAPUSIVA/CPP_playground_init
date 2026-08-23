#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve({1,2,3,4}),b=optimal::solve({1,2,3,4});assert(a==b);assert(b.back()==2.5);
    return 0;
}
