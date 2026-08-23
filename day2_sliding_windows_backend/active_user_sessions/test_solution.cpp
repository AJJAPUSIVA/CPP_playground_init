#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Interval>s{{1,5},{2,7},{8,10}};std::vector<int>q{2,5,9};auto a=brute_force::solve(s,q),b=optimal::solve(s,q);assert(a==b);assert(b==std::vector<int>({2,1,1}));
    return 0;
}
