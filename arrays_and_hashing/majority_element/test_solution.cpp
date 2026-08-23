#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    assert(brute_force::solve({2,2,1,1,1,2,2})==2);
    assert(optimal::solve({2,2,1,1,1,2,2})==2);

    return 0;
}
