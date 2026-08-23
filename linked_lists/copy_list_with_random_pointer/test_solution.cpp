#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){playground::RandomNode a(1),b(2);a.next=&b;a.random=&b;b.random=&b;auto*x=brute_force::solve(&a);auto*y=optimal::solve(&a);assert(x!=&a&&x->val==1&&x->random->val==2);assert(y!=&a&&y->val==1&&y->random->val==2);delete x->next;delete x;delete y->next;delete y;
    return 0;
}
