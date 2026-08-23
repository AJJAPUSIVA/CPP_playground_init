#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<int>a{-2,0,3,-5,2,-1};std::vector<std::pair<int,int>>q{{0,2},{2,5}};assert(brute_force::solve(a,q)==std::vector<long long>({1,-1}));assert(optimal::solve(a,q)==std::vector<long long>({1,-1}));
    return 0;
}
