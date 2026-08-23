#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>l{{1,4,5},{1,3,4},{2,6}};auto e=std::vector<int>{1,1,2,3,4,4,5,6};assert(brute_force::solve(l)==e);assert(optimal::solve(l)==e);
    return 0;
}
