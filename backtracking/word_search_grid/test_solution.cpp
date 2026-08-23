#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main() {
    std::vector<std::vector<char>> b{{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    assert(brute_force::solve(b,"ABCCED"));
    assert(optimal::solve(b,"SEE"));
    assert(!optimal::solve(b,"ABCB"));

    return 0;
}
