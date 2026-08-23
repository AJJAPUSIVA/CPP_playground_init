#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::tuple<int,int,int>>u{{1,3,2},{2,4,3},{0,2,-2}};auto a=brute_force::solve(5,u),b=optimal::solve(5,u);assert(a==b);assert(b==std::vector<long long>({-2,0,3,5,3}));
    return 0;
}
