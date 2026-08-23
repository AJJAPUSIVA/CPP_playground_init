#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::pair<std::string,std::string>>e{{"a","b"},{"b","c"},{"x","y"}};assert(brute_force::solve(e,"a")==std::vector<std::string>({"b","c"}));assert(optimal::solve(e,"a")==std::vector<std::string>({"b","c"}));
    return 0;
}
