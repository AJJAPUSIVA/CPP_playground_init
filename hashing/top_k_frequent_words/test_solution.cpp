#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto e=std::vector<std::string>{"i","love","leetcode","i","love","coding"};assert(brute_force::solve(e,2)==std::vector<std::string>({"i","love"}));assert(optimal::solve(e,2)==std::vector<std::string>({"i","love"}));
    return 0;
}
