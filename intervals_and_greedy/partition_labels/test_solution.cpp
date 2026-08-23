#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){auto e=std::vector<int>{9,7,8};assert(optimal::solve("ababcbacadefegdehijhklij")==e);
    return 0;
}
