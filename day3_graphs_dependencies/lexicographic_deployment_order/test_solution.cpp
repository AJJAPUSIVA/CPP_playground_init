#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::string>t{"a","b","c"};std::vector<std::pair<std::string,std::string>>d{{"c","a"}};assert(brute_force::solve(t,d)==std::vector<std::string>({"a","b","c"}));assert(optimal::solve(t,d)==std::vector<std::string>({"a","b","c"}));
    return 0;
}
