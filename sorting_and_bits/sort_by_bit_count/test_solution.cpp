#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto e=std::vector<int>{0,1,2,4,8,3,5,6,7};assert(optimal::solve({0,1,2,3,4,5,6,7,8})==e);
    return 0;
}
