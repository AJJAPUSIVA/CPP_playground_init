#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("/users/123/orders/99")=="/users/:id/orders/:id");assert(optimal::solve("/users/123/orders/99")=="/users/:id/orders/:id");
    return 0;
}
