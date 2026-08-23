#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){assert(brute_force::solve("leetcode",{"leet","code"}));assert(optimal::solve("leetcode",{"leet","code"}));assert(!optimal::solve("catsandog",{"cats","dog","sand","and","cat"}));
    return 0;
}
