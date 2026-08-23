#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::pair<std::string,std::string>>e{{"a","b"},{"b","c"},{"a","x"},{"x","c"}};assert(brute_force::solve(e,"a","c")==2);assert(optimal::solve(e,"a","c")==2);
    return 0;
}
