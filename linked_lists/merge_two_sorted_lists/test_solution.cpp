#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto*a=playground::vectorToList({1,2,4});auto*b=playground::vectorToList({1,3,4});auto*x=brute_force::solve(a,b);auto*y=optimal::solve(a,b);std::vector<int>e{1,1,2,3,4,4};assert(playground::listToVector(x)==e);assert(playground::listToVector(y)==e);playground::deleteList(a);playground::deleteList(b);playground::deleteList(x);playground::deleteList(y);
    return 0;
}
