#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=playground::vectorToList({1,2,3,4});auto*b=playground::vectorToList({1,2,3,4});auto*x=brute_force::solve(a);auto*y=optimal::solve(b);std::vector<int>e{1,4,2,3};assert(playground::listToVector(x)==e);assert(playground::listToVector(y)==e);playground::deleteList(a);playground::deleteList(x);playground::deleteList(y);
    return 0;
}
