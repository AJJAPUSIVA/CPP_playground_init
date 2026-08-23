#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::Queue a(3);optimal::Queue b(3);assert(a.enQueue(1)&&a.enQueue(2)&&a.enQueue(3)&&!a.enQueue(4));assert(b.enQueue(1)&&b.enQueue(2)&&b.enQueue(3)&&!b.enQueue(4));assert(a.Rear()==3&&b.Rear()==3);assert(a.deQueue()&&b.deQueue());assert(a.Front()==2&&b.Front()==2);
    return 0;
}
