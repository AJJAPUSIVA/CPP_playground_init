#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){ std::vector<int>a{-1,0,3,5,9,12}; assert(brute_force::solve(a,9)==4); assert(optimal::solve(a,9)==4); assert(optimal::solve(a,2)==-1); 
    return 0;
}
