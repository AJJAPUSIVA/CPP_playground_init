#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Interval>a{{1,3},{6,9}};auto b=optimal::solve(a,{2,5});assert(b.size()==2);assert(b[0].start==1&&b[0].end==5);
    return 0;
}
