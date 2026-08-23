#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    assert(brute_force::solve({100,4,200,1,3,2})==4);
    assert(optimal::solve({100,4,200,1,3,2})==4);

    return 0;
}
