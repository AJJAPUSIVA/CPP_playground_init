#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::MyStack a;optimal::MyStack b;a.push(1);a.push(2);b.push(1);b.push(2);assert(a.top()==2&&b.top()==2);assert(a.pop()==2&&b.pop()==2);assert(!a.empty()&&!b.empty());
    return 0;
}
