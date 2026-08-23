#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::string>w{"wrt","wrf","er","ett","rftt"};auto a=brute_force::solve(w);auto b=optimal::solve(w);assert(!a.empty());assert(!b.empty());assert(optimal::solve({"abc","ab"}).empty());
    return 0;
}
