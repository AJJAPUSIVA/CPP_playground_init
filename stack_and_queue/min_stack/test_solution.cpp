#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::MinStack a;optimal::MinStack b;for(auto* s:{(void*)&a,(void*)&b}){} a.push(-2);a.push(0);a.push(-3);b.push(-2);b.push(0);b.push(-3);assert(a.getMin()==-3&&b.getMin()==-3);a.pop();b.pop();assert(a.top()==0&&b.top()==0);assert(a.getMin()==-2&&b.getMin()==-2);
    return 0;
}
