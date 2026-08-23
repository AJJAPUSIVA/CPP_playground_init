#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=playground::vectorToList({1,2,3});auto*b=playground::vectorToList({1,2,3});auto*x=brute_force::solve(a);auto*y=optimal::solve(b);assert(playground::listToVector(x)==std::vector<int>({3,2,1}));assert(playground::listToVector(y)==std::vector<int>({3,2,1}));playground::deleteList(a);playground::deleteList(x);playground::deleteList(y);
    return 0;
}
