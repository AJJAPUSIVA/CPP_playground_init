#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve({"200","404","200"}),b=optimal::solve({"200","404","200"});assert(a["200"]==2&&b["200"]==2);
    return 0;
}
