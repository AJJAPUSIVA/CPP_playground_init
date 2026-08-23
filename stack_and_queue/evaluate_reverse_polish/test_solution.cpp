#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::string>t{"2","1","+","3","*"};assert(brute_force::solve(t)==9);assert(optimal::solve(t)==9);
    return 0;
}
