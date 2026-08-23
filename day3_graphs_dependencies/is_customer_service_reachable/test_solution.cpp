#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::pair<std::string,std::string>>e{{"a","b"},{"b","c"}};assert(optimal::solve(e,"a","c"));assert(!optimal::solve(e,"c","a"));
    return 0;
}
