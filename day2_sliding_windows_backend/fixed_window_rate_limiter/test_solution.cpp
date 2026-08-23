#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::pair<std::string,long long>>r{{"u",1},{"u",2},{"u",9},{"u",10}};auto a=brute_force::solve(r,2,10),b=optimal::solve(r,2,10);assert(a==b);assert((b==std::vector<bool>{true,true,false,true}));
    return 0;
}
