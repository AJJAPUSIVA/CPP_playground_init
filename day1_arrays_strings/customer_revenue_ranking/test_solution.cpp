#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Transaction>t{{"b",5},{"a",10},{"b",10}};assert(brute_force::solve(t)==std::vector<std::string>({"b","a"}));assert(optimal::solve(t)==std::vector<std::string>({"b","a"}));
    return 0;
}
