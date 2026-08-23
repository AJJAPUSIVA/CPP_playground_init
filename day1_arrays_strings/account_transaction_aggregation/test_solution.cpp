#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Transaction>t{{"A1",100},{"A2",50},{"A1",200}};auto a=brute_force::solve(t),b=optimal::solve(t);assert(a["A1"]==300&&b["A1"]==300&&b["A2"]==50);
    return 0;
}
