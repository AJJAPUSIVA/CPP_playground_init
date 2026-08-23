#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<std::string>>a{{"John","a@mail","b@mail"},{"John","b@mail","c@mail"},{"Mary","m@mail"}};assert(brute_force::solve(a).size()==2);assert(optimal::solve(a).size()==2);
    return 0;
}
