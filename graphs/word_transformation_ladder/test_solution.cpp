#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::string>w{"hot","dot","dog","lot","log","cog"};assert(brute_force::solve("hit","cog",w)==5);assert(optimal::solve("hit","cog",w)==5);
    return 0;
}
