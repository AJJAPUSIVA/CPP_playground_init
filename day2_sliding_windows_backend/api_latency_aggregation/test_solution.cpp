#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::pair<std::string,double>>a{{"/x",10},{"/x",20},{"/y",9}};assert(brute_force::solve(a)["/x"]==15);assert(optimal::solve(a)["/x"]==15);
    return 0;
}
