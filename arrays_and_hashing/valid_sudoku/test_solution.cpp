#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){
    std::vector<std::string> b={"53..7....","6..195...",".98....6.","8...6...3","4..8.3..1","7...2...6",".6....28.","...419..5","....8..79"};
    assert(brute_force::solve(b));
    assert(optimal::solve(b));
    b[0][1]='5';
    assert(!optimal::solve(b));

    return 0;
}
