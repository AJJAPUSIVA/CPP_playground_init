#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::HashMap a;optimal::HashMap b;for(auto*m:{&a}){m->put(1,2);assert(m->get(1)==2);m->put(1,3);assert(m->get(1)==3);m->remove(1);assert(m->get(1)==-1);}b.put(1,2);assert(b.get(1)==2);b.remove(1);assert(b.get(1)==-1);
    return 0;
}
