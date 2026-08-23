#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto a=brute_force::solve({1,1,1,2,2,3},2),b=optimal::solve({1,1,1,2,2,3},2);assert(a.size()==2);assert(b.size()==2);assert(std::find(b.begin(),b.end(),1)!=b.end());
    return 0;
}
