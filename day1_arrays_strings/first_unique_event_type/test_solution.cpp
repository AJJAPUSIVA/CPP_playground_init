#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve({"a","b","a","c"})==std::optional<std::string>("b"));assert(optimal::solve({"a","b","a","c"})==std::optional<std::string>("b"));
    return 0;
}
