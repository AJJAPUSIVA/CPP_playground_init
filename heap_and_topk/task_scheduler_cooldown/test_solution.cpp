#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<char>t{'A','A','A','B','B','B'};assert(brute_force::solve(t,2)==8);assert(optimal::solve(t,2)==8);
    return 0;
}
