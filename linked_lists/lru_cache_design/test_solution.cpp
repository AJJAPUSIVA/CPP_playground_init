#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

template<class C> void check(){C c(2);c.put(1,1);c.put(2,2);assert(c.get(1)==1);c.put(3,3);assert(c.get(2)==-1);c.put(4,4);assert(c.get(1)==-1);assert(c.get(3)==3);assert(c.get(4)==4);}
int main(){check<brute_force::LRUCache>();check<optimal::LRUCache>();
    return 0;
}
