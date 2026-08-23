#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Edge>e{{0,1,4},{0,2,1},{2,1,2}};auto a=brute_force::solve(3,e,0),b=optimal::solve(3,e,0);assert(a[1]==3);assert(b[1]==3);
    return 0;
}
