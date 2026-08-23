#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){playground::ListNode a(3),b(2),c(0),d(-4);a.next=&b;b.next=&c;c.next=&d;d.next=&b;assert(brute_force::solve(&a));assert(optimal::solve(&a));d.next=nullptr;assert(!optimal::solve(&a));
    return 0;
}
