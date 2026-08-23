#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=playground::vectorToList({1,2,3,4,5});auto*b=playground::vectorToList({1,2,3,4,5});auto*x=brute_force::solve(a,2);auto*y=optimal::solve(b,2);std::vector<int>e{1,2,3,5};assert(playground::listToVector(x)==e);assert(playground::listToVector(y)==e);playground::deleteList(a);playground::deleteList(x);playground::deleteList(y);
    return 0;
}
