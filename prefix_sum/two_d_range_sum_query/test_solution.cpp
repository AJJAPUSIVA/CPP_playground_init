#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<int>>g{{1,2},{3,4}};std::vector<std::array<int,4>>q{{0,0,1,1},{0,1,1,1}};assert(brute_force::solve(g,q)==std::vector<long long>({10,6}));assert(optimal::solve(g,q)==std::vector<long long>({10,6}));
    return 0;
}
