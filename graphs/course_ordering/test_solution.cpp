#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve(4,{{1,0},{2,0},{3,1},{3,2}});auto b=optimal::solve(4,{{1,0},{2,0},{3,1},{3,2}});assert(a.size()==4);assert(b.size()==4);assert(optimal::solve(2,{{1,0},{0,1}}).empty());
    return 0;
}
