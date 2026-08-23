#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::WordDictionary a;optimal::WordDictionary b;for(auto*m:{&a}){m->addWord("bad");m->addWord("dad");assert(m->search(".ad"));assert(!m->search("pad"));}b.addWord("bad");b.addWord("dad");assert(b.search(".ad")&&!b.search("pad"));
    return 0;
}
