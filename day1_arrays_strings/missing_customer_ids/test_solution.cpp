#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve({"a","b"},{"b","c"}),b=optimal::solve({"a","b"},{"b","c"});assert(a==b);assert(a.first==std::vector<std::string>{"a"}&&a.second==std::vector<std::string>{"c"});
    return 0;
}
