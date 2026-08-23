#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::vector<playground::Interval>>s{{{1,2},{5,6}},{{1,3}},{{4,10}}};auto a=brute_force::solve(s),b=optimal::solve(s);assert(a.size()==1&&b.size()==1);assert(a[0].start==3&&a[0].end==4);assert(b[0].start==3&&b[0].end==4);
    return 0;
}
