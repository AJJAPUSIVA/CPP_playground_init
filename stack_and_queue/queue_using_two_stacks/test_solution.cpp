#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::MyQueue a;optimal::MyQueue b;a.push(1);a.push(2);b.push(1);b.push(2);assert(a.peek()==1&&b.peek()==1);assert(a.pop()==1&&b.pop()==1);assert(!a.empty()&&!b.empty());
    return 0;
}
