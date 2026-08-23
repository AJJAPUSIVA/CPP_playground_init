#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve({"eat","tea","tan","ate","nat","bat"});auto b=optimal::solve({"eat","tea","tan","ate","nat","bat"});assert(a.size()==3);assert(b.size()==3);
    return 0;
}
